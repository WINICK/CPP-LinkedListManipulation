#include <cstdlib>
#include <iostream>
#include "Header.h"
using namespace std;
List::List() {
    head = NULL;
    curr = NULL;
    temp = NULL;
}
void List::AddNode(int addData) {
    nodePtr n = new node;
    n->next = NULL;
    n->data = addData;
    if(head!=NULL){
        curr = head;
        while(curr->next!=NULL){
            curr = curr->next;
        }
        curr->next = n;
    }
    else{
        head = n;
    }
}
void List::DeleteNode(int delData) {
    nodePtr delPtr = NULL;
    temp = head;
    curr = head;
    while(curr != NULL && curr->data != delData){
        temp = curr;
        curr = curr->next;
    }
    if(curr == NULL){
        cout<<delData<<"was not in the list\n";
        delete delPtr;
    }
    else{
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        if(delPtr == head){
            head = head->next;
            temp = NULL;
        }
        delete delPtr;
        cout << "The value " << delData<<"was deleted\n";
    }
}
void List::Push(int addData){
    nodePtr n = new node;
    n->data = addData;
    n->next = head;
    head = n;
}
void List::bubbleSort()
{
    int swapped, i;
    nodePtr start = head;
    nodePtr ptr1;
    nodePtr lptr = NULL;
    if (start == NULL)
        return;
    do
    {
        swapped = 0;
        ptr1 = start;

        while (ptr1->next != lptr)
        {
            if (ptr1->data > ptr1->next->data)
            {
                swap(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
    cout << "The list has been sorted\n\n" << endl;
}
void List::swap(nodePtr a, nodePtr b)
{
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}
void List::AddAtSpecified(int position, int addData){
    nodePtr newNode = new node();
    newNode->data = addData;
    newNode->next = NULL;
    if (position < 1) {
        cout << "\nPosition should be >= 1.";
    }
    else if (position == 1) {
        newNode->next = head;
        head = newNode;
    }
    else {
        nodePtr temp = head;
        for (int i = 1; i < position - 1; i++) {
            if (temp != NULL) {
                temp = temp->next;
            }
        }
        if (temp != NULL) {
            newNode->next = temp->next;
            temp->next = newNode;
        }
        else {
            cout << "\nThe previous node is null.";
        }
    }
}
void List::PrintList(){
    curr = head;
    int i = 0;
    cout << "*******************************\n";
    while(curr!= NULL)
    {
        cout<<"The "<<i<<" Node is: "<<curr->data << endl;
        curr = curr->next;
        i++;
    }
}