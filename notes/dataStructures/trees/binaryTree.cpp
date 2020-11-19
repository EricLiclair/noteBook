/*
-----Binary Tree or Binary Search Tree-----

Binary tree is a special type of tree data structure which is used to store data in a sequence.
A node's left child must have a value less than its parent's value and the node's right child
must have a value greater than its parent value.


-----Binary Search Tree basic operations-----

Insert:
insert an element in the tree / create a tree

Search:
search an element in the tree

PreOrder traversal:
traversing in pre-order

PostOrder traversal:
traversing in post-order

InOrder traversal:
traversing in in-order

*/

#include <iostream>
#define null NULL

using namespace std;

template <typename dataType>
struct Node
{
    dataType data; //initialising the data element
    Node *left;    //pointer to the left subtree
    Node *right;   //pointer to the right subtree

    Node(dataType data)
    {
        this->data = data;
    }
};

Node<int> *root = null;

// -----function to insert node-----
template <typename dataType>
void insertNode(dataType data)
{
    //create a new node
    Node<dataType> *newNode = new Node<dataType>(data);
    newNode->left = null;
    newNode->right = null;

    // check if root node is null (empty tree)
    if (root == null)
    {
        root = newNode; //if the tree is empty, add the new node and mark it as root
        return;
    }

    // if root exists
    Node<dataType> *current, *parent; //pointer to traverse the tree
    current = root;
    parent = null;

    while (1)
    {
        parent = current;

        if (data < parent->data)
        {
            current = current->left;

            if (current == null)
            {
                parent->left = newNode;
                return;
            }
        }

        current = current->right;
        if (current == null)
        {
            parent->right = newNode;
            return;
        }
    }
}

// -----function to search a given element in the binary tree-----
//note: the order of search operation in a binary tree is O(log n)

int main()
{
    for (int i = 0; i < 20; i++) //adding the data to the tree
    {
        insertNode<int>(i);
        cout << "added " << i << endl;
    }
}