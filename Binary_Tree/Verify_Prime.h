/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date viernes, 21 de agosto de 2020 10:07:14
 * @function Declaration Verify_Prime
*/

#ifndef VERIFY_PRIME_H
#define VERIFY_PRIME_H

#include <iostream>

#include "Tree_Node.h"

using namespace std;

class Verify_Prime
{
public:
    Verify_Prime();
    int verify_node_prime();
    void set_node(Tree_Node<int>* _digit_tree);
    virtual ~Verify_Prime();
protected:
private:
    Tree_Node<int>* _digit_tree;
    int verify_prime(int num, int divider);
    int prime(int num, int divider);
    int verify_node_prime(Tree_Node<int>* tree, int cont);
};

#endif
