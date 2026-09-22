#include <iostream>
using namespace std;
/*struct Node{
    int data;
    Node* next;
};
int main(){
    Node n1,n2;
    n1.data=2; n1.next=&n2;
    n2.data=3; n2.next=nullptr;
    Node* head=&n1;
    cout<<head->data<<" -> "<<head->next->data<<" -> Null";

}*/
class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            data=val;
            next=nullptr;
        }
        
};
void travers_al(Node* head){
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data;
        if(curr->next!=NULL){
            cout<<" -> ";
        }
        curr=curr->next;
        
    }cout<<" -> NULL";
}

void deleteList(Node* head){
    Node* temp;
    Node* curr=head;
    while(curr!=NULL){
        temp=curr->next;
        delete curr;
        curr=temp;
    }
}
void count_sum(Node* head){
    int count=0;
    int sum=0;
    Node* curr=head;
    while(curr!=NULL){
        count++; 
        sum+=curr->data;
        curr=curr->next;    
    }
    cout<<"No of nodes: "<<count<<endl;
    cout<<"Sum of data: "<<sum<<endl;
}
void max_(Node* head){
    int max=head->data;
    Node* curr=head->next;
    while(curr !=NULL){
        if(curr->data> max){
            max=curr->data;
        }
        curr=curr->next;
    }
    cout<<"Max element: "<<max<<endl;
}
void search(Node* head,int target){
    Node* curr=head;
    int node_no=0;
    int f=0;
    while(curr!=NULL){
        node_no++;
        if(curr->data ==target){
            cout<<"Found at node: "<<node_no;
            f=1;
            return;
        }
        curr=curr->next;  
    }
    if(!f){cout<<"Not found";}
}
void middle(Node* head){
    Node* one=head;
    Node* two=head;
    while(two!=NULL && two->next !=NULL){
        one=one->next;
        two=two->next->next;
    }
    cout<<"Middle : "<<one->data;
}
void has_cycle(Node* head){
    Node* slow=head;
    Node* fast=head;

    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            cout<<"YES CYCLE";
            return ;
        }
    }
    cout<<"NO CYCLE";
}
void Circular_trav(Node* head){
    Node* curr=head;
    do{
        cout<<curr->data<<" ";
        curr=curr->next;
    }while(curr!=head);
    cout<<"NULL";
}
void Recursive(Node* head){
    Node* curr=head;
    if(curr==NULL){
        cout<<"NULL"<<endl;
        return;
    }
    cout<< curr->data <<" ";
    Recursive(curr->next);
}

void Print_reverse(Node* curr){
    if(curr==nullptr) return;
    Print_reverse(curr->next);
    cout<<curr->data<<" ";
}

Node* insert_athead(Node* head,int val){
    Node* newNode= new Node(val);
    if(head==NULL){
        head=newNode;
        newNode->next=NULL;
        return head;
    }
    newNode->next=head;
    head=newNode;
    return head;
}

Node* insert_end(Node* head,int val){
    Node* newNode=new Node(val);
    if(head==nullptr){
        return newNode;
    }

    Node*curr=head;

    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=newNode;
    newNode->next=NULL;

    return head;
}
Node* insert_atpos(Node* head,int pos,int val){
    
    Node* newNode=new Node(val);
    if(pos==1){
        newNode->next=head;
        head=newNode;
        return head;
    }
    if(head==NULL) return head;

    Node* curr=head;

    for(int i=0;i<pos-2 && curr!=NULL;i++){
        curr=curr->next;
    }
    if(curr==NULL){
        cout<<"Invalid position";
        delete newNode;
        return head;
    }
    newNode->next=curr->next;
    curr->next=newNode;
    return head;
}

Node* before_node(Node* head , Node* pos,int val){
    Node* newNode=new Node(val);
    if(pos==head){
        newNode->next=head;
        return newNode;
    }
    Node* curr=head;
    while(curr!=NULL && curr->next!=pos){
        curr=curr->next;
    }
    newNode->next=curr->next;
    curr->next=newNode;
    return head;
}
void after_given(Node* head , Node* prev , int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        cout<<"Cant insert after null";
        delete newNode;
        return;
    }
    Node* curr=head;
    while(curr!=NULL && curr!=prev){
        curr=curr->next;
    }
    if(curr==NULL){
        cout<<"Invalid position";
        delete newNode;
        return;
    }
    newNode->next=curr->next;
    curr->next=newNode;
}
Node* sorted_insert(Node* head,int val){
    Node* newNode=new Node(val);

    if(head==NULL ||val<head->data ){
        newNode->next=head;
        head=newNode;
        return head;
    }
    Node* curr=head;
    while(curr->next!=NULL && curr->next->data < val){
        curr=curr->next;
    }
    newNode->next=curr->next;
    curr->next=newNode;
    return head;
}
int main(){
    Node* n1=new Node(10); 
    Node* n2=new Node(20); n1->next=n2;
    Node* n3=new Node(30); n2->next=n3;
    Node* n4=new Node(40); n3->next=n4;
    Node* n5=new Node(50); n4->next=n5;
                          //n5->next=n1;                     
    //Node* n1=NULL;                    
    Node* head=n1;

    //travers_al(head);
    //deleteList(head);
    //count_sum(head);
    //max_(head);
    //search(head,6);
    //middle(head);
    //has_cycle(head);
    //Circular_trav(head);
    //Recursive(head);
    //Node* curr=head;
    //Print_reverse(curr);
    //head=insert_athead(head,5);
    //head=insert_end(head,55);
    //head=insert_atpos(head,3,25);
    //head=before_node(head,head,15);
    //Node* n6=new Node(7);
    //after_given(head,15);
    head=sorted_insert(head,5);
    travers_al(head);
    return 0;
}
