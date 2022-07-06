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

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
   ///////////////////////dummy node method
             LinkedListNode<int>*temp=head;
             LinkedListNode<int>*dummy=NULL;
        while(temp){
            LinkedListNode<int>*a=temp->next;
            temp->next=dummy;
            dummy=temp;
            temp=a;
            
        }
        return dummy;
}
