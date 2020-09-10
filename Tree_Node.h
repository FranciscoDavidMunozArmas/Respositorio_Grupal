/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date viernes, 21 de agosto de 2020 10:07:14
 * @function Declaration Tree_Node
*/

#ifndef TREE_NODE_H
#define TREE_NODE_H

#include <iostream>

using namespace std;

template<class T>
class Tree_Node
{
public:
    Tree_Node();
    Tree_Node(T _data, Tree_Node* _left, Tree_Node* _right, Tree_Node* _parent);

    void set_data(T _data);
    void set_left_node(Tree_Node* _left);
    void set_right_node(Tree_Node* _right);
    void set_parent_node(Tree_Node* _parent);

    T get_data();
    Tree_Node* get_right_node();
    Tree_Node* get_left_node();
    Tree_Node* get_parent_node();

    string to_string();

    virtual ~Tree_Node();
protected:
private:
    Tree_Node* _left;
    Tree_Node* _right;
    Tree_Node* _parent;
    T _data;
};

#endif
