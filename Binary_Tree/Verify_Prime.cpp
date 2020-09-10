/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date viernes, 21 de agosto de 2020 10:07:14
 * @function Implementation Verify_Prime
*/

#include <iostream>

#include "Verify_Prime.h"
#include "Tree_Node.h"

using namespace std;

/**
 * @brief Verify_Prime
 * @return 
*/
Verify_Prime::Verify_Prime() {
    this->_digit_tree = NULL;
}

/**
 * @brief set_node
 * @param _digit_tree 
*/
void Verify_Prime::set_node(Tree_Node<int>* _digit_tree) {
    this->_digit_tree = _digit_tree;
}

/**
 * @brief verify_node_prime
 * @return int
*/
int Verify_Prime::verify_node_prime() {
    if (this->_digit_tree == NULL) {
        return -1;
    }
    else {
        return verify_node_prime(this->_digit_tree, 0);
    }
}

/**
 * @brief verify_node_prime
 * @param tree 
 * @param cont 
 * @return int
*/
int Verify_Prime::verify_node_prime(Tree_Node<int>* tree, int cont) {
    if (tree == NULL) {
        return cont;
    }
    else {
        cont = verify_node_prime(tree->get_left_node(), cont);
        if (verify_prime(tree->get_data(), 1)) {
            cont++;
        }
        cont = verify_node_prime(tree->get_right_node(), cont);
    }
    return cont;
}

/**
 * @brief verify_prime
 * @param num 
 * @param divider 
 * @return int
*/
int Verify_Prime::verify_prime(int num, int divider) {
    if (prime(num, divider) == 2) {
        return 1;
    }
    else {
        return 0;
    }
}

/**
 * @brief prime
 * @param num 
 * @param divider 
 * @return int
*/
int Verify_Prime::prime(int num, int divider) {
    if (divider == num) {
        return 1;
    }
    else {
        if (num % divider == 0) {
            return 1 + prime(num, divider + 1);
        }
        else {
            return 0 + prime(num, divider + 1);
        }
    }
}

/**
 * @brief ~Verify_Prime
 * @return 
*/
Verify_Prime::~Verify_Prime() {}
