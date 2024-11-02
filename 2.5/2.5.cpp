/*
* Done by
* Student name : Bohdan Petroshchuk
* Student group : 121
* Variant : 12
* Lab. 2.5
*/

#include <iostream>
#include "list.h"

void List::addSecond(int data)
{
    ListNode* newNode = new ListNode(data);
    if (head == NULL)
    {
        head = newNode;
    }
    else if (head->next == NULL)
    {
        head->next = newNode;
    }
    else
    {
        newNode->next = head->next;
        head->next = newNode;
    }
}

void List::addEnd(int data)
{
    ListNode* newNode = new ListNode(data);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        ListNode* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

List formSecondList(List list1)
{
    List SecondList;
    ListNode* temp = list1.head;
    while (temp != NULL)
    {
        if (checkislesserthan5(temp))
        {
            SecondList.addEnd(temp->data);
        }
        temp = temp->next;
    }
    return SecondList;
}

int main()
{
    List list1;
    list1.addSecond(10);
    list1.addSecond(120);
    list1.addSecond(-10);
    list1.addSecond(0);
    list1.addSecond(15);
    list1.addSecond(-230);
    List list2 = formSecondList(list1);
}

