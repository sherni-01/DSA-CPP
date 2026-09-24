#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=nullptr;
        
    }
};
void print(Node* head){
    Node* curr=head;
    while(curr!=nullptr){
        
        cout<<curr->data;
        //if(curr->next!=NULL){
            cout<<" -> ";
        //}
        curr=curr->next;
    }
    cout<<"NULL";
}
Node* delete_beg(Node* head){
    if(head==nullptr) return head;
    Node* temp=head->next;
    delete head;
    head=temp;
    return head;
}
Node* delete_end(Node* head){
    Node* curr=head;
    if(head==nullptr) return head;

    if(head->next ==nullptr){
        delete head;
        return nullptr;
    }

    while(curr->next->next !=nullptr){
        curr=curr->next;
    }
    delete curr->next;
    curr->next=nullptr;
    return head;
}
Node* delete_value(Node* head,int value){
    if(head==nullptr) return head;
    if(head->data ==value){
        Node* temp=head->next;
        delete head;
        head=temp;
        return head;
    }
    Node* curr=head;
    while(curr->next!=nullptr && curr->next->data !=value){
        curr=curr->next;
    }
    if(curr->next==nullptr){
        return head;
    }
    Node* temp=curr->next->next;
    delete curr->next;
    curr->next=temp;
    return head;

}
Node* delete_pos(Node* head,int pos){
    if(head==nullptr|| pos<0) return head;
    if(pos==0){
        Node* temp=head->next;
        delete head;
        return temp;
    }
    Node* curr=head;
    for(int i=0;i<pos-1 && curr->next!=nullptr ;i++){
        curr=curr->next;
    }
    if(curr->next==nullptr){
        return head;
    }
    Node* temp=curr->next->next;
    delete curr->next;
    curr->next=temp;
    return head;
}
Node* delete_entire(Node* head){
    if(head==nullptr) return head;
    //Node* curr=head;
    while(head!=nullptr){
        Node* temp=head;
        head=head->next;
        delete temp;

    }
    return head;
}
Node* delete_occ(Node* head,int val){
    if(head==nullptr){
        return head;
    }
    while(head!=nullptr && head->data==val){
        Node* temp=head->next;
        delete head;
        head=temp;
    }

    Node* curr=head;
    while(curr!=nullptr && curr->next !=nullptr){
        if(curr->next->data ==val){
            Node* temp=curr->next;
            curr->next=temp->next;
            delete temp;
        }
        else{
            curr=curr->next;
        }
        
    }
    return head;
}
Node* delete_dubsorted(Node* head){
    if(head==nullptr){
        return nullptr;
    }
    Node* curr=head;
    while(curr!=nullptr&& curr->next !=nullptr){
        if(curr->data ==curr->next->data){
            Node* temp=curr->next;
            curr->next=temp->next;
            delete temp;
        }else{
            curr=curr->next;
        }
    }
    return head;
}

int main(){
    Node* n1=new Node(10);
    Node* n2=new Node(20); n1->next=n2;
    Node* n3=new Node(30); n2->next=n3;
    Node* n4=new Node(40); n3->next=n4;
    Node* n5=new Node(50); n4->next=n5;

    Node* head=nullptr;
    //head=delete_beg(head);
    //head=delete_end(head);
    //head=delete_value(head,60);
    //head=delete_entire(head);
    //head=delete_occ(head,20);
    //head=delete_dubsorted(head);
    print(head);
    head=delete_dubsorted(head);cout<<"\n";
    print(head);cout<<"\n";
}