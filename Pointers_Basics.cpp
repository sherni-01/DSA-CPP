//.........POINTERS.......
#include <iostream>
using namespace std;
/*int main(){
    int a=10;

    int* ptr=&a;
    cout<<&a<<" "<<ptr<<endl;

    int** ptr2=&ptr;//pointer to pointer
    cout<<&ptr<<" "<<ptr2<<endl;

    cout<<*(&a)<<endl;// * -> deferencing operator 


    cout<<**(ptr2)<<endl;// value where pointer to pointer is pointing to
}*/
/*int main(){
    int** ptr=NULL; 
    cout<< ptr<<endl;// ponits to 0
}*/

//...PASS BY REF...
/*void change(int* ptr){
    *ptr=20;
}
int main(){
    int a=10;
    int* ptr=&a;
    change(ptr);
    cout<<"a = "<<a;
}*/
//...PASS BY REF USING ALIAS...
/*void changeA(&b){
    b=20;
}
int main(){
    int a=10;
    changeA(a);
    cout<<"Value of a = "<<a;
}*/
//....ARRAY POINTER==CONSTANT POINTER....
/*int main(){
    int arr[]={1,2,3,4,5};
    cout<<arr<<endl; // address of array 
    cout<<*arr<<endl; // points to 1st element of array
}*/
//....POINTER ARITHEMATIC....
int main(){
    int arr[]={10,20,30,40};
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;


    int *ptr=arr;
    ptr+=1;// points to next index
    cout<<*(ptr)<<endl;


    *ptr+=1;// increment value at ptr
    cout<<*(ptr)<<endl;

    int *ptr2=ptr;
    cout<<(ptr2==ptr)<<endl;

    int *ptr3;
    ptr2=ptr3+2;
    cout<<(ptr3 < ptr2)<<endl;

    ptr=arr;// ptr points to 0st index
    ptr2=ptr+3 ;//ptr2 points to 3rd index
    cout<<(ptr2-ptr)<<endl; //gives no of elements b/w them 


}

