//....STACK USING LINKED LIST.....

/*#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void push(Node** top ,int val){
    Node* newNode=new Node();
    newNode->data=val;
    newNode->next=*top;
    *top=newNode;
    cout<<"Pushed: "<<val<<endl;//(*top)->data;
}
void pop(Node **top){
    if(*top==nullptr){
        cout<<"Stack underflow"<<endl;
        return;
    }
    Node* temp=*top;
    int popedval=temp->data;
    *top=(*top)->next;
    delete temp;
    cout<<"Poped val: "<<popedval<<endl;
}
void peek(Node* top){
    if(top==nullptr){
        cout<<"Stack underflow"<<endl;
        return;
    }
    cout<<"Top value: "<<top->data<<endl;
}
int main(){
    Node* top=nullptr;
    pop(&top);
    push(&top,10);
    push(&top,20);
    push(&top,30);
    peek(top);
    pop(&top);
    peek(top);

}
*/

//......STACK USING ARRAY......

/*#include <iostream>
using namespace std;
#define MAX 5
struct array{
    int arr[MAX];
    int top;
};
void initstack(array* a){
    a->top=-1;
}
bool isempty(array* a){
    return a->top==-1;
}
bool isfull(array* a){
    return a->top==MAX-1;
}
void push(array* a,int val){
    if(isfull(a)){
        cout<<"Stack overflow"<<endl;
        return ;
    }
    a->top++;
    a->arr[a->top]=val;
    cout<<"Pushed val: "<<a->arr[a->top]<<endl;
}
void pop(array* a){
    if(isempty(a)){
        cout<<"Stack is underflow"<<endl;
        return;
    }
    cout<<"Poped val: "<<a->arr[a->top]<<endl;
    a->top--;
}
int main(){
    struct array st;
    initstack(&st);
    cout<<"Is empty: "<<isempty(&st)<<endl;
    push(&st,10);
    cout<<"Is empty: "<<isempty(&st)<<endl;
    pop(&st);
    cout<<"Is empty: "<<isempty(&st)<<endl;
}*/
//.....TWO STACK USING ARRAY.....
#include <iostream>
using namespace std;
#define MAX 10 
struct array{
    int arr[MAX];
    int top1;
    int top2;
};
void initstack(array* a){
    a->top1=-1;
    a->top2=MAX;
}
void push1(array* a,int val){
    if(a->top1 +1 == a->top2){
        cout<<"Stack 1 overflow"<<endl;
        return ;
    }
    a->top1++;
    a->arr[a->top1]=val;
    cout<<"Pushed val1: "<<a->arr[a->top1]<<endl;
}
void push2(array *a,int val){
    if(a->top1 +1==a->top2){
        cout<<"Stack 2 overflow"<<endl;
        return ;
    }
    a->top2--;
    a->arr[a->top2]=val;
    cout<<"Pushed val2: "<<a->arr[a->top2]<<endl;
}
void pop1(array* a){
    if(a->top1==-1){
        cout<<"Stack 1 underflow"<<endl;
        return;
    }
    cout<<"Poped val1: "<<a->arr[a->top1]<<endl;
    a->top1--;
}
void pop2(array* a){
    if(a->top2==MAX){
        cout<<"Stack 2 underflow"<<endl;
        return;
    }
    cout<<"Poped val2: "<<a->arr[a->top2]<<endl;
    a->top2++;
}
void print(array* a){
   cout << "Stack 1: ";
    for(int i = 0; i <= a->top1; i++){
        cout << a->arr[i] << " ";
    }

    cout << endl;

    cout << "Stack 2: ";
    for(int i = a->top2; i < MAX; i++){
        cout << a->arr[i] << " ";
    }

    cout << endl;
}
int main(){
    struct array ar;
    initstack(&ar);
    pop1(&ar);
    pop2(&ar);
    push1(&ar,10);
    push1(&ar,20);
    push2(&ar,100);
    push2(&ar,90);
    print(&ar);
    return 0;
}