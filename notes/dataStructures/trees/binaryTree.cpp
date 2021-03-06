/*
-----Binary Tree or Binary Search Tree-----

Binary tree is a special type of tree data structure which is used to store data in a sequence.
A node's left child must have a value less than its parent's value and the node's right child
must have a value greater than its parent value.


-----Binary Search Tree basic operations-----

1. Insert:
insert an element in the tree / create a tree

2. Search:
search an element in the tree

3. PreOrder traversal:
traversing in pre-order

4. PostOrder traversal:
traversing in post-order

5. InOrder traversal:
traversing in in-order

*/

#include <iostream>
#define null NULL

using namespace std;

//defining the structure
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
template <typename dataType>
void binarySearch(Node<dataType> *rootPointer, dataType keyElement)
{
    if (rootPointer == null)
    {
        cout << keyElement << " not found";
        return;
    }

    if (keyElement == rootPointer->data)
    {
        cout << "found " << keyElement;
        return;
    }
    if (keyElement < rootPointer->data)
    {
        binarySearch<dataType>(rootPointer->left, keyElement);
    }
    else
    {
        binarySearch<dataType>(rootPointer->right, keyElement);
    }
}

//-----preOrder traversal-----
template <typename dataType>
void preOrder(Node<dataType> *ptr)
{
    cout << ptr->data << " -> ";
    if (ptr->left != null)
        preOrder(ptr->left);
    if (ptr->right != null)
        preOrder(ptr->right);
}

//-----postOrder traversal-----
template <typename dataType>
void postOrder(Node<dataType> *ptr)
{
    if (ptr->left != null)
        postOrder(ptr->left);
    if (ptr->right != null)
        postOrder(ptr->right);
    cout << ptr->data << " -> ";
}

//-----inOrder traversal-----
template <typename dataType>
void inOrder(Node<dataType> *ptr)
{
    if (ptr->left != null)
        inOrder(ptr->left);
    cout << ptr->data << " -> ";
    if (ptr->right != null)
        inOrder(ptr->right);
}

int main()
{
    int a[] = {1, 2, 5, 3, 4, 6};
    for (int i = 0; i < 6; i++) //adding the data to the tree
    {
        insertNode<int>(a[i]);
        cout << a[i] << " -> ";
    }
    cout << "null\n";

    binarySearch<int>(root, 6);

    cout << "\nPre Order traversal ";
    preOrder(root);
    cout << "\nPost Order traversal ";
    postOrder(root);
    cout << "\nIn Order traversal ";
    inOrder(root);
}