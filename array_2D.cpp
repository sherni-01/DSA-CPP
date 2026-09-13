#include <iostream>
using namespace std;
void find_key(int arr[][4],int r,int c){
    int key;cin>>key;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==key){
                cout<<i<<j;
                return;
            }
        }  
    }
    cout<<"-1";

}
void max_row(int arr[][4],int r,int c){
    int maxSum=INT8_MIN;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
        maxSum=max(maxSum,sum);

    }
    cout<<"Max Row Sum: "<<maxSum;
}
void max_col(int arr[][4],int r,int c){

}

void diagonal_sum(int arr[][4],int r,int c){
    int dsum=0;
    //primary diagonal
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j){
                dsum+=arr[i][j];
            }
        }
    }
    cout<<"Primary Diagonal Sum : "<<dsum<<endl;
    //PD + SD
    int sum_pd=0,sum_sd=0;
    for(int i=0;i<r;i++){
        sum_pd+=arr[i][i];//primary diagonal
        sum_sd+=arr[i][r-i-1];//secondary diagonal
    }
    if(r%2==0){
        int final_sum=sum_pd+sum_sd;
        cout<<"PD + SD : "<<final_sum<<endl;
    }else{
        int final_sum=(sum_pd+sum_sd)-arr[r/2][r/2];//remove double occurance of common element 
        cout<<"PD + SD : "<<final_sum<<endl;
    }

    //optimised
    int sum=0;
    for(int i=0;i<r;i++){
        sum+=arr[i][i]; //PD

        if(i!=r-i-1){   //ELEIMATE COMMON ELEMENT 
            sum+=arr[i][r-i-1]; //SECONDARY ELEMENT 
        }
    }
    cout<<"DSUM(optimised code) : "<<sum<<endl;
}


int main(){
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int row=4;
    int col=4;
    int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row2=3;
    int col2=3;
    //find_key(arr,row,col);
    //max_row(arr,row,col);
    diagonal_sum(arr,row,col);

    //input
    /*for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }*/
    
    //output
    /*for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }*/

    //VECTOR OF 2D ARRAY
    vector<vector<int>>mat={{1,2,3},{4,5,6},{7,8,9}};
    

    return 0;
}