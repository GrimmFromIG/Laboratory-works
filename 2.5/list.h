#ifndef LIST_H
#define LIST_H

struct ListNode
{
    int data;
    ListNode *next;
    ListNode(int x) : data(x), next(NULL) {}
};
struct List
{
    ListNode* head;
    List() : head(NULL) {}
    void addsecond(int);
};
inline bool checkislesserthan5(ListNode* element)
{
    if (element->data < 5)
    {
        return true;
    }   
    return false; 
}
#endif //LIST_H