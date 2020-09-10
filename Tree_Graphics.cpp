/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date viernes, 21 de agosto de 2020 10:07:14
 * @function Implementation of Tree_Graphics
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <SFML/Graphics.hpp>

#include "Tree_Graphics.h"

#include "Binary_Tree.h"
#include "Tree_Node.h"

using namespace std;

/**
 * @brief Tree_Graphics
 * @tparam T 
*/
template<class T>
Tree_Graphics<T>::Tree_Graphics() {
	this->height = 600;
	this->width = 900;
	window = new sf::RenderWindow(sf::VideoMode(width, height), "TREE");
	window->setVisible(false);
}

/**
 * @brief _print_tree
 * @tparam T 
 * @param _tree 
*/
template<class T>
void Tree_Graphics<T>::_print_tree(Binary_Tree<T>* _tree) {
	if (_tree->_is_empty()) {
		cout << "Arbol Vacio" << endl;
	}
	else {
		window->clear();
		_print_tree(width/2, 10, 0, 35 * _tree->height() , 0, _tree->_get_root());
		window->setVisible(true);
		window->display();
		system("pause");
	}
}

/**
 * @brief _draw_circle
 * @tparam T 
 * @param x 
 * @param y 
 * @param radious 
 * @param color 
*/
template<class T>
void Tree_Graphics<T>::_draw_circle(int x, int y, int radious, sf::Color color) {
	sf::CircleShape circle(150);
	circle.setRadius(15);
	circle.setOutlineThickness(5);
	circle.setOutlineColor(color);
	circle.setPosition(x, y);
	window->draw(circle);
}

/**
 * @brief _draw_line
 * @tparam T 
 * @param x 
 * @param y 
 * @param vec_x 
 * @param vec_y 
 * @param color 
*/
template<class T>
void Tree_Graphics<T>::_draw_line(int x, int y, int vec_x, int vec_y, sf::Color color) {
	sf::RectangleShape line;
	line.setSize(sf::Vector2f(vec_x, vec_y));
	sf::Vertex lines[] = { sf::Vertex(sf::Vector2f(vec_x, vec_y)), sf::Vertex(sf::Vector2f(x, y)) };
	window->draw(lines, 2, sf::Lines);
}

/**
 * @brief _draw_text
 * @tparam T 
 * @param x 
 * @param y 
 * @param _text 
 * @param color 
*/
template<class T>
void Tree_Graphics<T>::_draw_text(int x, int y, string _text, sf::Color color) {
	sf::Text text;
	sf::Font font;
	font.loadFromFile("Roboto-Regular.ttf");
	text.setFont(font);
	text.setString(_text);
	text.setCharacterSize(10);
	text.setFillColor(color);
	text.setPosition(x + 3, y + 4);
	text.setStyle(sf::Text::Style::Bold);
	window->draw(text);
}

/**
 * @brief _draw_node
 * @tparam T 
 * @param x 
 * @param y 
 * @param _node 
 * @param color 
*/
template<class T>
void Tree_Graphics<T>::_draw_node(int x, int y, Tree_Node<T>* _node, sf::Color color) {
	this->_draw_circle(x, y, 15, color);
	this->_draw_text(x, y, _node->to_string(), sf::Color::Black);
}

/**
 * @brief _print_tree
 * @tparam T 
 * @param x 
 * @param y 
 * @param _height 
 * @param floor 
 * @param _index 
 * @param _node 
*/
template<class T>
void Tree_Graphics<T>::_print_tree(int x, int y, int _height, int floor, int _index, Tree_Node<T>* _node) {
	if (_node == NULL) {
		return;
	}

	_draw_node(x, y, _node, sf::Color::Blue);

	_print_tree(x - y / (_index + 1) - floor / (_height + 1), y + 50, _height + 1, floor/(_height + 1), 2 * _index + 1, _node->get_left_node());
	_print_tree(x + y / (_index + 1) + floor / (_height + 1), y + 50, _height + 1, floor/(_height + 1), 2 * _index + 1, _node->get_right_node());

	if (_node->get_left_node() != NULL) {
		_draw_line(x, y + 15, x - y / (_index + 1) - floor / (_height + 1) + 30, y + 50, sf::Color::Red);
	}
	if (_node->get_right_node() != NULL) {
		_draw_line(x + 30, y + 15 , x + y / (_index + 1) + floor / (_height + 1), y + 50, sf::Color::Red);
	}
}