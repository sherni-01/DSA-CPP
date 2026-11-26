#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val):data(val),next(nullptr){}
};
void printSLL(Node* head){
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" -> ";
        curr=curr->next; 
    }cout<<"NULL";
}
void SLL_front(Node*& head,int x){
    Node* newNode=new Node(x);
    newNode->next=head;
    head=newNode;
}
void SLL_tail(Node*& head,int x){
    Node* newNode=new Node(x);
    if(head==nullptr){newNode->next=head;head=newNode;return;}
    Node* curr=head;
    while(curr->next !=nullptr){
        curr=curr->next;
    }
    newNode->next =curr->next;
    curr->next=newNode;

}
void SLL_idx(Node*& head,int idx,int x){
    if(idx<0 || head==nullptr){cout<<"Invalid index"<<endl; return;}
    if(idx==0){SLL_front(head,x);return;}
    Node* curr=head;
    for(int i=0;curr!=nullptr && i<idx-1;i++ ){
        curr=curr->next;
    }
    if(curr==nullptr){cout<<"Index out of range"<<endl;return;}
    Node* newNode=new Node(x);
    newNode->next=curr->next;
    curr->next=newNode;
}
void SLL_sorted(Node*& head,int x){
    Node* newNode=new Node(x);
    if(head==nullptr || head->data > x){
        SLL_front(head,x);return ;
    }
    Node* curr=head;
    while(curr->next!=nullptr && curr->next->data < x){
        curr=curr->next;
    }
    newNode->next=curr->next;
    curr->next=newNode;

}

int main(){
    Node* n1=new Node(10); 
    Node* n2=new Node(20); n1->next=n2;
    Node* n3=new Node(30); n2->next=n3;
    //Node* n4=new Node(40); n3->next=n4;
    //Node* n5=new Node(50); n4->next=n5;
                          //n5->next=n1;                     
    //Node* n1=NULL;                    
    Node* head=n1;

    SLL_front(head,5);
    SLL_tail(head,35);
    SLL_idx(head,5,100);
    SLL_sorted(head,106);
    printSLL(head);


    return 0;
}