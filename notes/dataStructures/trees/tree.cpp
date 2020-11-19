/*
Tree Data Structures:

Tree data structures are the extended form of linked lists with one or more pointer variables in each node
Path − Path refers to the sequence of nodes along the edges of a tree.

Root − The node at the top of the tree is called root. There is only one root per tree and one path from the root node to any node.

Parent − Any node except the root node has one edge upward to a node called parent.

Child − The node below a given node connected by its edge downward is called its child node.

Leaf − The node which does not have any child node is called the leaf node.

Subtree − Subtree represents the descendants of a node.

Visiting − Visiting refers to checking the value of a node when control is on the node.

Traversing − Traversing means passing through nodes in a specific order.

Levels − Level of a node represents the generation of a node. If the root node is at level 0, then its next child node is at level 1, its grandchild is at level 2, and so on.

keys − Key represents a value of a node based on which a search operation is to be carried out for a node.
*/

#include <iostream>
#define null NULL

using namespace std;

template <typename dataType>
struct Node
{
    dataType data; //data element of the node
    Node *child1;  //pointer to the first subtree
    Node *child2;  //pointer to the second subtree
};

Node<int> *root = null; //intialising the root node

int main()
{
    return 0;
}