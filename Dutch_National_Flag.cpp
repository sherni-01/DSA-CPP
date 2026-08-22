#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>arr={0,2,2,1,0,0,1,1};
    int n=arr.size();
    int low=0;// 0->low-1 == 0
    int mid=0;// low->mid-1 ==1
    int high=n-1;// high->n-1 ==2
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if (arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }

    for(int val:arr){
        cout<<val<<" ";
    }
}