//OPTIMIZED BINARY SEARCH 
/*#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int>& arr, int tar){
    int n=arr.size();
    int start=0,end=n-1;
    while(start<=end){
        int mid=start+((end-start)/2); //To save ourself from the overflow of int when start and end are INT_MAX
        if(arr[mid]>tar){
            end=mid-1;
        }
        else if(arr[mid]<tar){
            start=mid+1;
        }
        else{
            return mid;
        }  
    }
}
int main(){
    vector<int>arr={2,4,6,8,10,12};
    int tar;
    cout<<"Enter element to be searched: ";
    cin>>tar;
    cout<<"Target found at index : "<<binarySearch(arr,tar);

}*/
// .... BINARY SEARCH WITH RECURSION ....
/*#include <iostream>
#include <vector>
using namespace std;
int rec(vector<int>& arr,int tar,int st,int end){
    if(st<=end){
        int mid=st+((end-st)/2);
        if(tar<arr[mid]){
            return rec(arr,tar,st,mid-1);
        }
        else if(tar>arr[mid]){
            return rec(arr,tar,mid+1,end);
        }
        else {
            return mid;
        }   
    }
    return -1;
}
int main(){
    vector<int>arr={2,4,5,6,7,8,10};
    int tar;
    cout<<"Element to be searched: ";
    cin>>tar;
    int st=0,end=arr.size()-1;
    cout<<"Tar found at index : "<<rec(arr,tar,st,end);
}*/
// .... ROTATED SORTED ARRAY .... 
#include <iostream>
#include <vector>
using namespace std;
int bS(vector<int>& arr, int tar){
    int n=arr.size();
    int start=0;
    int end =n-1;
    while(start<=end){
        int mid=start+((end-start)/2);
        if(arr[mid]==tar){
            return mid;
        }
        else if (arr[start]<arr[mid]){ // Left half
            if(arr[start]<=tar && tar<=arr[mid]){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }else{ // Right half
            if(arr[mid]<=tar && tar<=arr[end]){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
}
int main(){
    vector<int>arr={3,4,5,6,7,0,1,2};
    int tar;
    cout<<"Enter element to be searched : ";
    cin>>tar;
    cout<<"Tar found at index : "<<bS(arr,tar);

}