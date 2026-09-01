#include <iostream>
#include <vector>
using namespace std;
void check_prime(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    if(n<=1){
        cout<<n<<" is non prime";
        return ;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<n<<" is non prime";
            return ;
        }
    }
    cout<<n<<" is prime";
}
void series_ofprime(){//brute force 
    int num;
    cout<<"Enter num : ";
    cin>>num;
    for(int n=2;n<=num;n++){
        int prime=1;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                prime=0;
                break;
            }
        }
        if(prime){
            cout<< n <<" ";
        }
    }
}
void count_primes(){//sieve of eratosthenes
    int n;
    cout<<"Enter n:";
    cin>>n;
    int count=0;
    vector<bool>isPrime(n+1,true);
    for(int i=2;i<n;i++){
        if(isPrime[i]){
            count++;

            for(int j=i*i;j<n;j+=i){
                isPrime[j]=false;
            }
        }
    }
    cout<<"Count of prime : "<<count;
    /*
    for(int i=2;i<n;i++){    //to print prime no is this range 
        if(isPrime[i]==true){
            cout<<i<<" ";
        }
    }*/
}
void digit_innum(){
    int n;cout<<"Enter n:" ;cin>>n;
    int count=0;
    int sum=0;
    cout<<"individual Digits: ";
    while(n!=0){
        int digit=n%10;
        count++;sum+=digit;
        cout<<digit<<" ";
        n=n/10;
    }
    cout<<"\n";
    cout<<"No of digits: "<<count<<endl;
    cout<<"Sum of digits: "<<sum;

}
int main(){
    //check_prime(); 
    //series_ofprime(); 
    //count_primes();
    digit_innum();
}