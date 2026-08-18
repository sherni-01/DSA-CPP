/*#include<iostream>
using namespace std;*/

/*int main(){
   char ch;
   cout<<"Enter your character: ";
   cin>>ch;
   (ch>=97 && ch<=122)?cout<<"Lowercase":cout<<"Uppercase";
    return 0;
}*/
/*int main(){
    int n,i=0;
    cout<<"Enter number n: ";
    cin>>n;
    int sumOdd=0,sumEven=0;
    for(int i=0;i<=n;i++){
        if(i%2!=0){
            sumOdd+=i;
        }
    }
    while(i<=n ){
        if(i%2==0){
            sumEven+=i;
        }
        i++;
    }
    cout<<"SumOdd = "<<sumOdd<<endl;
    cout<<"SumEven = "<<sumEven<<endl;
}*/
/*#include <iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter no to check : ";
     cin>>n;
    int isprime;
    for(int i=2;i<n-1;i++){
        isprime=1;
        if(n%i==0){
            isprime=0;
            break;
        }
    }
    isprime?cout<<"Prime":cout<<"Nont a prime";
}*/
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter till range: ";
    cin>>n;
    int isprime;
    int count=0;
    cout<<"From 1 to "<<n<<" Prime no are: "<<endl;
    for(int i=2;i<n;i++){
        isprime=1;
        for(int m=2;m*m<=i;m++){
            if(i%m==0){
                isprime=0;
                break;
            }
        }
        if (isprime){
            count++;
        }
    }
    cout <<"total prime count: "<<count;
}*/
/*#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        if(i%3==0){
            sum+=i;
        }
    }
    cout<<"Sum of no's divisible by 3 upto "<<n<<": "<<sum<<" ."<<endl;
}*/
/*#include <iostream>
using namespace std;
int main(){
    int n,fac=1;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        fac*=i;
    }
    cout<<"Factorial of "<<n<<" is : "<<fac;
}*/
/*#include <iostream>
using namespace std;
int main(){
    int n;
    char ch='A';
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}*/
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int num=1;
    for(int i=n;i>0;i--){
        for(int j=0;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<num;
        }
        num++;
        cout<<endl;
    }
}*/
//... PALINDROMIC NUMBER PYRAMID ... 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number n: ";
    cin>>n;
    int m,o;
    for(int i=0;i<n;i++){
        m=1;
        o=i;
        for(int j=0;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<m;
            m++;
        }
        for(int l=0;l<i;l++){
            cout<<o;
            o--;
            
        }
        cout<<endl;
    }
}


//.... DIAMOND PATTER ....
/*#include <iostream>
using namespace  std;
int main(){
    int n;
    cout <<"Enter n: ";
    cin>>n;
    //top
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
            for(int k=0;k<2*i-1;k++){
            cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    //bottom
    for(int i=0;i<n-1;i++){
        for(int k=0;k<i+1;k++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=n-2){
            for(int j=0;j<2*(n-i)-5;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}*/