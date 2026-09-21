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
voud 
int main(){
    Node* n1=new Node(1); 
    Node* n2=new Node(2); n1->next=n2;
    Node* n3=new Node(3); n2->next=n3;
    Node* n4=new Node(4); n3->next=n4;
    Node* n5=new Node(5); n4->next=n5;

    Node* head=n1;

    //travers_al(head);
    //deleteList(head);
    //count_sum(head);
    //max_(head);
    //search(head,6);
    middle(head);
    return 0;
}
