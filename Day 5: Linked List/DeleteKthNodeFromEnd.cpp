#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int n)
{
       if(head==NULL || n==0) {
           return head;

           }
   LinkedListNode<int>*dummy=new LinkedListNode<int>(-1);dummy->next=head;
        LinkedListNode<int>*fast=dummy;LinkedListNode<int>*slow =dummy;
       while(n--){
           fast=fast->next;
       }   
        while(fast->next){
            fast=fast->next;
            slow=slow->next;
        }
        LinkedListNode<int>*temp=slow->next->next;
        slow->next=temp;
        return dummy->next;
}
