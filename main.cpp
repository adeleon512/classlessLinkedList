/*
 * classlessLinkedList.cpp
 *
 *  Created on: Mar 27, 2015
 *      Author: Adam
 */
//This program creates a linked list without using a class.
//The Node data type and head pointer are defined in main.
//Then 2 new nodes are created and appended.
//Then a loop prints out the values.
//Then the 2 nodes are deallocated.

#include <iostream>

using namespace std;

int main() {

    struct ListNode {
        double value;
        ListNode *next;
    };

    ListNode *head = NULL;

    ListNode *newNode = new ListNode;
    newNode->value = 10;
    newNode->next = NULL;

    head = newNode;

    newNode = new ListNode;
    newNode->value = 11;
    newNode->next = NULL;

    head->next = newNode;

    //This code to display the list could go in a function
    ListNode *p = head;
    while (p) {
        cout << p->value << " ";
        p = p->next;
    }
    cout << endl;

    p = head->next;
    delete head;
    delete p;

    return 0;
}



