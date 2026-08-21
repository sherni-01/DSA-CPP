//.... BUBBLE SORT ....
/*#include <iostream>
#include <vector>
using namespace std;
void BubbleSort(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        bool isSorted= false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSorted=true;
            }
        }
        if(!isSorted){break;}
    }
}
void printArr(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>arr={5,4,3,2,1};
    BubbleSort(arr);
    printArr(arr);
}*/
// .... SELECTION SORT ....
/*#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[min_idx]>arr[j]){
                min_idx=j;
            }
        }
        swap(arr[i],arr[min_idx]);
    }
}
void printArr(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>arr ={2,1,5,4,3};
    selectionSort(arr);
    printArr(arr);
}*/
// .... INSERTION SORT ....
#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){ // for dec arr[prev]<curr
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}

void printArr(vector<int>& arr){
    for(int val :arr ){
        cout<<val<<" ";
    }
}

int main(){
    vector<int>arr={4,1,5,2,3};
    insertionSort(arr);
    printArr(arr);
}