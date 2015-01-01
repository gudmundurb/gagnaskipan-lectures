#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string item;
    int count;
    Node *link;
};

typedef Node* NodePtr;

void head_insert(NodePtr& head, int the_number, string the_item);
// Creates a new Node with the given values and makes it the head of the given list

int main()
{
    NodePtr head;
    NodePtr next;

    head = new Node;
    head->count = 5;
    head->item = "eggs";
    head->link = NULL;

    head_insert(head, 10, "butter");
    cout << head->item << ": " << head->count << endl;

    next = head->link;
    if (next != NULL)
        cout << next->item << ": " << next->count << endl;

}

void head_insert(NodePtr& head, int the_number, string the_item)
// Creates a new Node with the given values and makes it the head of the given list
{
    NodePtr tmpPtr;
    tmpPtr = new Node;
    tmpPtr->count = the_number;
    tmpPtr->item = the_item;
    tmpPtr->link = head;
    head = tmpPtr;

}
