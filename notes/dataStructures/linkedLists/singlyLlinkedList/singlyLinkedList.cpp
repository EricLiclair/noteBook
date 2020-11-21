#include <iostream>

#define null NULL

using namespace std;

// creating a structure (a data of type `node`)
template <typename dataType>
struct Node
{
    dataType data; //data element of the node
    Node *next;    //pointer to the next node

    Node(dataType data) //constructor to initialise or update the data element
    {
        this->data = data;
    }
};

Node<int> *head = null; //initialising the head pointer

// function to add element at the start of the list
template <typename dataType>
void addElementAtHead(dataType data)
{
    Node<dataType> *newNode = new Node<dataType>(data);

    if (head == null)
        head = newNode;
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

// function to search and element in the list
template <typename dataType>
bool searchElement(Node<dataType> *head, dataType keyElement)
{
    Node<dataType> *ptr = head;
    while (ptr != null)
    {
        if (ptr->data == keyElement)
        {
            cout << "Element Found\n";
            return true;
        }
        ptr = ptr->next;
    }

    cout << "Element NOT found!\n";
    return false;
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        addElementAtHead(i);
        cout << i << " -> ";
    }
    cout << "null\n";

    searchElement(head, 19);
}