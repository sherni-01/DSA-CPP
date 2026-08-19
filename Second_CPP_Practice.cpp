/*#include <iostream>
using namespace std;*/
//BINARY COFFECIENT Q...
/*int nfac(int n){
    int fac=1;
    for(int i=n;i>0;i--){
        fac*=i;
    }
}
int main(){
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    cout<<"Bn coffectient : "<<nfac(n)/(nfac(r)*nfac(n-r));

}*/
//DECIMAL TO BINARY...
/*int decimalToBinary(int n){
    int pow=1;
    int rem,ans=0;
    while(n>0){
        rem=n%2;
        n=n/2;
        ans+=(rem*pow);
        pow*=10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Decimal to binary of "<<n<<" is : "<<decimalToBinary(n);
}*/
//BINARY TO DECIMAL
/*int binaryTodecimal(int bn){
    int pow=1,n,ans=0,rem;
    n=bn;
    while(n>0){
        rem=n%10;
        n=n/10;
        ans+=(rem*pow);
        pow*=2;
    }
    return ans;
}
int main(){
    int bn;
    cout<<"Enter binary no : ";
    cin>>bn;
    cout<<"Binary to decimal is : "<<binaryTodecimal(bn);

}*/
//............ARRAY..................
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size(n) of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int small=INT8_MAX;
    int lar=INT8_MIN;
    int indexS=0,indexL=0;
    for(int i=0;i<5;i++){
        if(arr[i]>lar){
            lar=arr[i];
            indexL=i;
        }
        {small=min(arr[i],small);
        indexS=i;}
        
    }
    cout<<"Smallest : "<<small<<" | Index: "<<indexS<<endl;
    cout<<"Largest : "<<lar<<" | Index: "<<indexL<<endl;
}*/
/*#include <iostream>
using namespace std;
int linearSearch(int arr[],int size){
    int k;
    while(k!=-1){
        cout<<"Enter element to be seached: ";
        cin>>k;
    int found,index=0;
    for(int i=0;i<size;i++){
        found=0;
        if(arr[i]==k){
            index=i;
            found=1;
            break;
        }
    }
    found ? cout<<"Yes! element exists at index : "<<index<<endl : cout<<"No! try other element..\n";
    }
}
int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter elemnts: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    //cout<<"Enter element to be searched : ";
    linearSearch(arr,size);
}*/
/*#include <iostream>
using namespace std;
int main(){
    int arr[5]={0,1,2,3,4};
    int start=0;
    int end=5-1;//n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}*/

//print unique element
/*#include <iostream>
using namespace std;
int main(){
    int arr[7]={4,1,2,3,1,2,6};
    int count;
    for(int i=0;i<7;i++){
        count=0;
        for(int j=0;j<7;j++){
            if(arr[i]==arr[j]){
                count++;
                
            }
        }
            if(count==1){
                cout<<arr[i]<<" ";
            }
        
    }
}*/

//intersection of 2 arrays
/*#include <iostream>
using namespace std;
int main(){
    int arr1[5]={0,1,2,3,4};
    int arr2[5]={1,3,8,2,7};
    int common;
    for(int i=0;i<5;i++){
        common=0;
        for(int j=0;j<5;j++){
            if(arr1[i]==arr2[j]){
                common=1;
            }
        }
        common?cout<<arr1[i]<<" ":cout<<"";
    }
}*/
//................VECTOR,...........
#include<iostream>
#include <vector>
using namespace std;
/*int main(){
    vector<int>vec(3,0);//(size,initilizer for each index)
    cout<<vec[0];
}*/
int main(){
    vector<int>vec={1,2,3,4,5};
    vec.push_back(6);
    vec.pop_back();
    cout<<"In back : "<<vec.back()<<endl;
    cout<<"Size = "<<vec.size()<<endl;
    cout<<"at index: "<<vec.at(0)<<endl; //return value at given index 

    for(int val:vec){   //For Each loop
        cout<<val<<" ";
    }
}