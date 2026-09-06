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
#include <cmath>
void count_fun(){
    int n;cout<<"Enter n: ";
    cin>>n;
    cout<<(int)(log10(n)+1);
}
void armstrong(){//153= 1^3 + 5^3 + 3^3
    int n;cout<<"Enter n: ";cin>>n;
    if(n==0){cout<<"Yes! Armstrong";}
    int digits=0;
    int temp = n;
    while(temp != 0){
        digits++;
        temp /= 10;
    }
    int copy=n;
    int final=0;
    while(copy!=0){
        int lastdigit=copy%10;
        final+=(int)(pow(lastdigit,digits)+0.5);
        copy=copy/10;
    }
    if(final==n ){
        cout<<"Yes! Armstrong ";
    }else{
        cout<<"No, Not Armstrong";
    }
}


void gcd_lcm(){
    int a;cout<<"Enter a: ";cin>>a;
    int b;cout<<"Enter b: ";cin>>b;

    if(a==0 && b!=0){
        cout<<"GCD: "<<b<<endl;
        cout<<"LCM: "<<(a*b)/b;
        return ;
    }
    else if(b==0 && a!=0){
        cout<<"GCD: "<<a<<endl;
        cout<<"LCM: "<<(a*b)/a;
        return ;

    }else if(a==b){
        cout<<"GCD: "<<a<<endl;
        cout<<"LCM: "<<(a*b)/a;
        return ;
    }

    int g_cd=1;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            g_cd=i;
        }
    }
    cout<<"GCD: "<<g_cd<<endl;
    cout<<"LCM: "<<(a*b)/g_cd;

}
void euclid(){
    int a;cout<<"Enter a: ";cin>>a;
    int b;cout<<"Enter b: ";cin>>b;

    if(a==b){
        cout<<"GCD: "<<a;
        return ;
    }

    while(a!=0 && b!=0){
        if(a>b){
            a=a%b;
        }else if(b>a){
            b=b%a;
        }
    }
    
    if(a==0) cout<<"GCD: "<<b;
    else cout<<"GCD: "<<a;
}

void reverse_palindrome(){
    int num;cout<<"Enter num to reverse: ";cin>>num;
    int copy=num;
    int reversed=0;
    while(copy!=0){
        int d=copy%10;
        reversed=reversed*10+d ;
        copy/=10;
    }
    cout<<"Reverse of "<<num<<" : "<<reversed<<endl;
    if(reversed==num)cout<<"Palindrome !";
    else cout<<"Not palindrome";
}
int main(){
    //check_prime(); 
    //series_ofprime(); 
    //count_primes();
    //digit_innum();
    //count_fun();
    //armstrong();
    //gcd_lcm();
    //euclid();
    reverse_palindrome();
}