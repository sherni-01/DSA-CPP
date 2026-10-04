//....Queue using array....

/*#include <iostream>
using namespace std;
#define max 5
struct arrqueue{
    int arr[max];
    int front ;
    int rear;
};
void initqueue(arrqueue* q){
    q->front=0;
    q->rear=-1;
}
int isfull(arrqueue* q){
    return q->rear==max-1;
}

int isempty(arrqueue* q){
    return q->rear < q->front;
}
void enqueue(arrqueue* q, int val){
    if(isfull(q)){
        cout<<"Queue overflow"<<endl;
        return ;
    }
    q->rear++;
    q->arr[q->rear]=val;
    cout<<"Inserted : "<<q->arr[q->rear]<<endl;
}
void dequeue(arrqueue* q){
    if(isempty(q)){
        cout<<"Queue underflow";
        return;
    }
    int val=q->arr[q->front];
    q->front++;
    cout<<"Deleted : "<<val<<endl;
}
void front(arrqueue* q){
    if(isempty(q)){
        cout<<"Queue underflow";
        return ;
    }
    cout<<"At front: "<<q->arr[q->front]<<endl;
}
int main(){
    struct arrqueue qu;
    initqueue(&qu);
    enqueue(&qu,10);
    enqueue(&qu,20);
    front(&qu);
    dequeue(&qu);
    front(&qu);
    return 0;
}*/

//....Circular queue....

/*#include <iostream>
using namespace std;
#define max 3 
struct cirqueue{
    int arr[max];
    int front;
    int rear;
    int size;
};
void initcir(cirqueue* cq){
    cq->front=0;
    cq->rear=-1;
    cq->size=0;
}
int isfull(cirqueue* cq){
    return cq->size==max;
}
int isempty(cirqueue* cq){
    return cq->size==0;
}
void enqueue(cirqueue* cq,int val){
    if(isfull(cq)){
        cout<<"Queue overflow"<<endl;
        return;
    }
    cq->rear=(cq->rear+1)%max;
    cq->arr[cq->rear]=val;
    cq->size++;
    cout<<"Inserted : "<<cq->arr[cq->rear]<<endl;
}
void dequeue(cirqueue* cq){
    if(isempty(cq)){
        cout<<"Queue underflow";
        return;
    }
    int val=cq->arr[cq->front];
    cq->front=(cq->front+1)%max;
    cq->size--;
    cout<<"Deleted : "<<val<<endl;
    
}
void getfront(cirqueue* cq){
    if(isempty(cq)){
        cout<<"Queue underflow";
        return;
    }
    cout<<"At front: "<<cq->arr[cq->front]<<endl;
}
int main(){
    struct cirqueue qu;

    initcir(&qu);
    enqueue(&qu,10);
    enqueue(&qu,20);
    getfront(&qu);
    dequeue(&qu);
    getfront(&qu);
    enqueue(&qu,30);
    enqueue(&qu,40);
    getfront(&qu);
    return 0;
}*/

//....Queue using linked list...
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
struct queue{
    Node* front;
    Node* rear;
};
void initqueue(queue* q){
    q->front=nullptr;
    q->rear=nullptr;
}
int isempty(queue* q){
    return q->rear==nullptr;
}
void enqueue(queue* q,int val){
    Node* newNode=new Node();
    newNode->data=val;
    newNode->next=nullptr;
    if(isempty(q)){
        q->front=newNode;
        q->rear=newNode;
        cout<<"Enqueued : "<< q->rear->data <<endl;
        return;
    }
    q->rear->next=newNode;
    q->rear=newNode;
    cout<<"Enqueued : "<< q->rear->data <<endl;
}
void dequeue(queue* q){
    if(isempty(q)){
        cout<<"queue underflow"<<endl;
        return;
    }
    Node* temp=q->front;
    int val=temp->data;
    q->front=q->front->next;
    if(q->front==nullptr){
        q->rear=NULL;
    }
    delete temp;
    cout<<"Deleted : "<<val<<endl;
}
void getfront(queue* q){
    if(isempty(q)){
        cout<<"Queue underflow"<<endl;
        return ;
    }
    cout<<"At front: "<<q->front->data<<endl;
}
int main(){
    struct queue q;
    initqueue(&q);

    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);

    getfront(&q);
    dequeue(&q);
    dequeue(&q);
    getfront(&q);
    return 0;
}
