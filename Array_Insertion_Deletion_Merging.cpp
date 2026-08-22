//......DELETION .....
/*#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int k;
    cout<<"Enter index of deletion: ";
    cin>>k;
    for(int i=k;i<5-1;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<5-1;i++){
        cout<<arr[i]<<" ";
    }
}*/
//.....INSERTION.....
/*#include <iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40};
    int k,val;
    cout<<"Enter kth index: ";
    cin>>k;
    cout<<"Enter val: ";
    cin>>val;
    for(int i=5-1;i>=k;i--){
        arr[i]=arr[i-1];
    }
    arr[k]=val;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}*/
//....UNSORTED MERGING....
/*#include <iostream>
using namespace std;
int main(){
    int arr1[4]={4,5,1,7};
    int arr2[3]={3,0,6};
    int a=4;int b=3;
    int newa[a+b];
    for(int i=0;i<a;i++){
        newa[i]=arr1[i];
    }
    for(int i=0;i<b;i++){
        newa[a+i]=arr2[i];
    }
    for(int i=0;i<a+b;i++){
        cout<<newa[i]<<" ";
    }
}*/
//....SORTED MERGING ....
/*#include <iostream>
using namespace std;
int main(){
    int arr1[3]={0,5,6};
    int arr2[4]={1,3,4,7};
    int arr3[7]={};
    int i=0;int j=0;int k=0;
    while(i<3 && j<4){
        if(arr1[i]<=arr2[j]){
            arr3[k++]=arr1[i++];
        }else{
            arr3[k++]=arr2[j++];
        }
    }
    while(i < 3){
        arr3[k++]=arr1[i++];
    }
    while(j < 4){
        arr3[k++]=arr2[j++];
    }
    for(int i=0;i<7;i++){
        cout<<arr3[i]<<" ";
    }
}*/
//....MERGE WITHOUT DUBLICATE ....
#include <iostream>
using namespace std;
int main(){
    int arr1[5]={0,1,2,3,3};
    int arr2[5]={1,4,5,6,7};
    int arr3[10]={};
    int i=0;int j=0;int k=0;
    int x=0;
    while(i<5 && j<5){
        if(arr1[i]<arr2[j]){
            x=arr1[i++];
        }else if(arr1[i]>arr2[j]){
            x=arr2[j++];
        }else{
            x=arr1[i++];
            j++;
        }
        if(k==0|| arr3[k-1]!=x){
            arr3[k++]=x;
        }
    }
    while(i < 5){
        if(k==0 || arr3[k-1]!=arr1[i])
        arr3[k++]=arr1[i++];
    }
    while(j < 5){
        if(k==0 || arr3[k-1]!=arr1[i])
        arr3[k++]=arr2[j++];
    }
    for(int i=0;i<k;i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}
