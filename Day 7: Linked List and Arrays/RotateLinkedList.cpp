

Node *rotate(Node *head, int k) {
      
     if(head==0||head->next==0)return head;
     // counting number of elements 
     Node*temp=head;int count=1;
        while(temp->next){
            temp=temp->next;
            count++;
        }
        temp->next=head;//joining head and tail
        int ans=k%count;
        ans=count-ans;temp=head;
        int m=1;
        while(m!=ans){
            
            temp=temp->next;
           
            m++;
        }
         Node*a=temp->next;//pointer to return
        temp->next=0;//making null
       return a; 
    
}
