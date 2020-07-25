/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 25 de julio de 2020 17:16:14
 * @function Declaration of Reverse_Polish
*/

#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

#include "Libraries/Verify_number.cpp"
#include "Libraries/Stack.cpp"
#include "Libraries/Node.cpp"

#include "Reverse_Polish.h"

#pragma once

using namespace std;

/**
 * @brief Reverse_Polish
 * @return 
*/
Reverse_Polish::Reverse_Polish() {}

/**
 * @brief _postfix
 * @param _expression 
 * @return string
*/
string Reverse_Polish::_postfix(string _expression) {
	Stack<char> _stack;
	_expression = '(' + _expression + ')';
	ostringstream oss;
	for (char _data:_expression) {
		if (_is_number(_data) || _is_letter(_data)) {
			oss << _data;
		}
		else if (_data == '(') {
			_stack._push(_data);
		}
		else if (_data == ')') {
			while (_stack._top() != '(') {
				oss << _stack._pop();
			}
			_stack._pop();
		}
		else {
			if (is_operator(_data)) {
				while (_priotity(_data) <= _priotity(_stack._top())) {
					oss << _stack._pop();
				}
				_stack._push(_data);
			}
		}
	}
	return oss.str();
}

/**
 * @brief _prefix
 * @param _expression 
 * @return string
*/
string Reverse_Polish::_prefix(string _expression) {

	_expression = this->_invert(_expression);
	_expression = this->_postfix(_expression);
	_expression = this->_invert(_expression);
	return _expression;
}

/**
 * @brief _priotity
 * @param _operator 
 * @return int
*/
int Reverse_Polish::_priotity(char _operator) {
	if (_operator == '-' || _operator == '+') {
		return 1;
	}
	else if (_operator == '*' || _operator == '/') {
		return 2;
	}
	else if (_operator == '^') {
		return 3;
	}
	else {
		return 0;
	}
}

/**
 * @brief _invert
 * @param _str 
 * @return string
*/
string Reverse_Polish::_invert(string _str) {
	char* _aux = (char*)malloc(_str.length()*sizeof(char));
	strcpy(_aux, _str.c_str());

	ostringstream oss;

	int _str_size = _str.length() - 1;
	for (int i = 0; i < _str_size + 1; i++) {
		if (*(_aux + _str_size - i) == '(') {
			oss << ')';
		}
		else if (*(_aux + _str_size - i) == ')') {
			oss << '(';
		}
		else {
			oss << *(_aux + _str_size - i);
		}
	}

	return oss.str();
}

/**
 * @brief is_operator
 * @param _operator 
 * @return bool
*/
bool Reverse_Polish::is_operator(char _operator) {
	return (!_is_letter(_operator) && !_is_number(_operator) && _operator != '(' && _operator != ')');
}

/**
 * @brief is_infix
 * @param _expression 
 * @return bool
*/
bool Reverse_Polish::is_infix(string _expression) {
	int _left = 0;
	int _right = 0;
	int _first = 0;
	int _last = _expression.length() - 1;

	for (char _aux: _expression) {
		if (_first == 0) {
			if (is_operator(_aux) && _aux != '(') {
				return false;
			}
		} else if (_first == _last) {
			if (is_operator(_aux) && _aux != ')') {
				return false;
			}
		}

		if (_aux < 40 || _aux == 44 || _aux == 46 || (57 < _aux && _aux < 65) || (90 < _aux && _aux < 94) || (94 < _aux && _aux < 97) || (122 < _aux)) {
			return false;
		}

		if (_aux == 40) {
			_left++;
		} else if (_aux == 41) {
			_right++;
		}

		_first++;
	}

	for (int i = 0; i < _last; i++) {
		if (is_operator(_expression.at(i))) {
			if (is_operator(_expression.at(i))&& is_operator(_expression.at(i+1))) {
				return false;
			}
		}
	}

	if (_left != _right) {
		return false;
	}

	return true;
}

/**
 * @brief ~Reverse_Polish
 * @return 
*/
Reverse_Polish::~Reverse_Polish() {}
