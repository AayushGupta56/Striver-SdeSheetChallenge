#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* list1, Node<int>* list2)
{
    Node<int>*dummy=new Node<int>(-1);Node<int>*i=list1;Node<int>*j=list2;
        Node<int>*head=NULL;
         if(list1 == NULL)
        return list2;
    
    if(list2 == NULL)
        return list1;
        
       if( list1->data<list2->data){
           head=list1;
          
       }  
        else head=list2;
        while(list1!=NULL&&list2!=NULL){
            if( list1->data<list2->data){
                dummy->next=list1;
                dummy=list1;
                list1=list1->next;
                }
            else if( list2->data<=list1->data){
                dummy->next=list2;
                dummy=list2;
                list2=list2->next;
                
            }
            
        }
        while(list1){ dummy->next=list1;
                dummy=list1;
                list1=list1->next;
                    }
        while(list2){
             dummy->next=list2;
                dummy=list2;
                list2=list2->next;
                
        }
        return head;
}
