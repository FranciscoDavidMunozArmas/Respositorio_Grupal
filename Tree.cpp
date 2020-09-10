/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date viernes, 21 de agosto de 2020 10:07:14
 * @function Declaration Tree
*/

#include "Tree.h"

/**
 * @brief Tree
 * @tparam T 
*/
template<typename T>
Tree<T>::Tree() {
	this->_root = NULL;
}

/**
 * @brief _is_empty
 * @tparam T 
 * @return bool
*/
template<typename T>
bool Tree<T>::_is_empty() {
	return (this->_root == NULL) ? true : false;
}

/**
 * @brief ~Tree
 * @tparam T 
*/
template<typename T>
Tree<T>::~Tree() {
	this->_root = NULL;
}
