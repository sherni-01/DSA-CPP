/*#include <iostream>
using namespace std;
main(){
    int n;
    cin>>n;
    pal(n);
   
}
void pal(int n){
    int n2=n,rev=0;
    while(n>0){
        int d=n%10;
        rev=10*rev+d;
        n=n/10;
    }
    if(rev==n2){
        cout<<"Palindrome";
    }else{
        cout<<"Not a palindorme";
    }
}*/
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int isprime;
    if(n==0 || n==1){
        isprime=0;
    }
    for(int i=2;i<n-1;i++){
        isprime=1;
        if(n%i==0){
            isprime=0;
            break;
        }
    }
        isprime?cout<<"Prime":cout<<"Non prime";
    
}*/
/*#include <iostream>
using namespace std;
class reverse{
    public:
        int n;
        void get(){
            cin>>n;
        }
        void display(){
            int rev=0;
            while(n>0){
                int d=n%10;
                rev=rev*10+d;
                n=n/10;
            }
            cout<<"Reverse is : "<<rev;
        }
};
main(){
    reverse r1;
    r1.get();
    r1.display() ;
}*/
//WAP TO CREATE A CLASS RECTANGLE WITH MEMBERS LEN , WID & FUNC. AREA & GET 
/*#include <iostream>
using namespace std;
class rectangle{
    int len;
    int wid;

    protected:
    int getl(){
        cin>>len;
        return len;
    }
    int getw(){
        cin>>wid;
        return wid;
    }
    public:
    void area(){
        getl();
        getw();
        cout<<"Area : "<<len*wid;
    }


};
main(){
    rectangle R;
    //R.get();
    R.area();
}*/
/*#include <iostream>
using namespace std;
class student{
    int roll;
    char name[20];
    int per;
    public:
    void getd();
    void display(){
        cout<<"Roll : "<<roll<<endl;
        cout<<"Name : "<<name<<endl<<"Percentage : "<<per;
    }

}s;
void student::getd(){
    cout<<"Enter roll,name,per consiqutively : ";
    cin>>roll>>name>>per;
}
main(){
    s.getd();
    s.display();
}*/
/*#include <iostream>
#include <string.h>
using namespace std;
struct student{
    int rollno;
    char name[20];
    int marks;
    public:
    void getdata(){
        cin>>rollno>>name >>marks;
    }
    void display(){
        cout<<endl<<"roll no"<<rollno<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"marks: "<<marks<<endl;
    }
}s1[2];
int main(){
    for(int i=0;i<2;i++){
        s1[i].getdata();
    }

    int present=0;
    for(int i=0;i<2;i++){
        if(strcmp(s1[i].name,"abc")==0){ 
            s1[i].display();
            present=1;
            break;  
        }
    }
    if(present==0){
        cout<<"No such student exist !!";
    }

}*/
/*#include <iostream>
using namespace std;
enum operation{
    add,
    sub,
    mul,
    devide,
};
int main(){
    operation op1;
    int num1,num2;
    cout<<"Enter num1: ";
    cin>>num1;
    cout<<"Enter num2: ";
    cin>>num2;
    op1=add;
    switch(op1){
        case 0: cout<<"Adding : num1+num2 = "<<num1+num2;
                break;
        case 1: cout<<"Subtracting: num1-num2 = "<<num1-num2;
                break;
        case 2: cout<<"Multiply: num1 x num2 = "<<num1*num2;
                break;
        case 3: cout<<"Divide: num1 / num2 = "<<num1/num2;
                break;
        default: cout<<"Choose a valid op !!";
    }
}*/
/*#include <iostream>
using namespace std;
class employee {
    public:
    int empid;
    int sal;
    char name[20];
    protected:
    int exp;
    public:
    void getdata(){
        cin>>empid>>sal>>name>>exp;
    }
    void display();
}ob[5];
void employee::display(){
        if(exp>5){
            //ob[i].display();
            cout<<empid<<" "<<name<<" "<<sal<<" "<<exp<<endl;
        } 
}
int main(){
    for(int i=0;i<5;i++){
        ob[i].getdata();
    }
    for(int i=0;i<5;i++){
    ob[i].display();
    }
}*/
/*#include <iostream>
using namespace std;
class student{
    public:
    int roll;
    char name[20];
    static int count;
    void getdata(){
        cin>>roll>>name;
        count++;
    }
    void display();
};
int student::count;
inline void student::display(){
    cout<<"count now: "<<count;
}
int main(){
    student s1,s2,s3;
    s1.getdata();
    s1.display();
    s2.getdata();
    s2.display();
    s3.getdata();
    s3.display();
}*/
/*#include <iostream>
using namespace std;
class bank{
    public:
    string name;
    int balance;
    static int interest;
    static int inte(){
        interest +=100;
        cout<<interest;
    }
};
int bank::interest=100;
int main(){
    bank c1,c2,c3;
    cout<<"Enter detail: ";
    cin>>c1.name>>c1.balance;
    cout<<"Enter detail: ";
    cin>>c2.name>>c2.balance;
    cout<<"Enter detail: ";
    cin>>c3.name>>c3.balance;
    cout<<"Details of c1: "<<c1.name<<" "<<c1.balance<<" "<<bank::inte()<<endl;
    cout<<"Details of c2: "<<c1.name<<" "<<c2.balance<<" "<<bank::inte()<<endl;
    cout<<"Details of c3: "<<c1.name<<" "<<c3.balance<<" "<<bank::inte()<<endl;
}*/
/*#include <iostream>
using namespace std;
void change(int &);
class bank{
    public:
    int salary;
    void bonus(int &amt){
        amt+=500;
    }
    void get(){
        cin>>salary;
    }
    void put(){
        cout<<"New salary: "<<salary;
    }
};
int main(){
    bank b1;
    b1.get();
    b1.bonus(b1.salary);
    b1.put();
}*/
/*#include <iostream>
using namespace std;
class calculate{
    public:
    double price=100;
    int quantity=2;
    void calculateBill(double ,int =1);
};
void calculate::calculateBill(double p,int q){
    cout<<"Price: "<<p<<" Quantity : "<<q<<endl;
    cout<<"Total Amt :"<<p*q<<endl;
    }
int main(){
    calculate c1;
    c1.calculateBill(c1.price);
    cout<<"Both args passed: "<<endl;
    c1.calculateBill(c1.price,c1.quantity);
}*/
//wap func area() -> area of circle
/*#include <iostream>
using namespace std;
class calculate{
    public:
    int a,b,c;
    double d1,d2;
    char ca;
    char cb;
    void get(){
    cout<<"Enter a b c: ";
    cin>>a>>b>>c;
    cout<<"Enter double d1,d2: ";
    cin>>d1>>d2;
    cout<<"Enter char c1,c2: ";
    cin>>ca>>cb;
    }
    void sum(int,int);
    void sum(char,char);
    void sum(double,double);
    void sum(int ,int,int);
};
void calculate::sum(int a,int b){
    cout<<"Sum of 2 int: "<<a+b<<endl;
}
void calculate::sum(char a,char b){
    cout<<"Sum of 2 char: "<<a+b<<endl;
}
void calculate::sum(double a,double b){
    cout<<"Sum of 2 double: "<<a+b<<endl;
}
void calculate::sum(int a,int b,int c){
    cout<<"Sum of 3 int: "<<a+b+c<<endl;
}
int main(){
    calculate c1;
    c1.get();
    c1.sum(c1.a,c1.b);
    c1.sum(c1.a,c1.b,c1.c);
    c1.sum(c1.d1,c1.d2);
    c1.sum(c1.ca,c1.cb);
}*/
/*#include <iostream>
using namespace std;
class fac{
    public:
    int n;
    void get(){
        cout<<" Enter n: ";
        cin>>n;
    }
    int fact(int n){
        if(n>=1){
            return n*fact(n-1);
        }
        else{
            return 1;
        }
    }
};
int main(){
    fac f1;
    f1.get();
    cout<<"Factorial of "<<f1.n<<" is : "<<f1.fact(f1.n);
}*/
/*#include <iostream>
using namespace std;
class fac{
    public:
    int n;
    void get(){
        cout<<"Enter n: ";
        cin>>n;
    }
    int fib(int n){
        if (n==1){
            return 0;
        }
        else if(n==2){
            return 1;
        }
        else if(n>=0){
            return fib(n-1)+fib(n-2);
        }

    }
};
int main(){
    fac f1;
    f1.get();
    cout<<"Fib. series of "<<f1.n<<" numbers is : ";
    for(int i=0;i<f1.n;i++){
        cout<<f1.fib(i);
    }
}*/
/*#include <iostream>
using namespace std;
class add{
    public:
    int n;
    void get(){
        cout<<"Enter n :";
        cin>>n;
    }
    int sum(int n){
        if(n==1){
            return 1;
        }
        else{
            return n+sum(n-1);
        }
    }
};
int main(){
    add a1;
    a1.get();
    cout<<"Sum of "<<a1.n<<" numbers is : "<<a1.sum(a1.n); 
}*/
/*#include <iostream>
using namespace std;
int prime_no(int n,int i){
    if(i>n/2){
        return 0;
    }
    if(n/i!=0){
        return prime(n,i+1);
    }
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int status=prime_no(n,2);
    if(status ==0){
        cout<<"non";
    }
    else {
        cout<<"Prime";
    }
}*/


/*#include <iostream>
#include <string.h>
using namespace std;
class student{
    public:
    char name[20];
    int marks1;
    int marks2;
    int marks3;
    void getdata(){
        cin>>name>>marks1>>marks2>>marks3;
    }
    void display(){
        cout<<"Topper's name: "<<name<<endl;
    }
}s[2];
int main(){
    for(int i=0;i<2;i++){
        s[i].getdata();
    }
    int avg=0;
    int maxavg=0;
    int maxid=-1;
    for(int i=0;i<2;i++){
        avg = (s[i].marks1 + s[i].marks2+ s[i].marks3)/3;
        if(avg>maxavg){
            maxavg=avg;
            maxid=i;
        }
    }
    s[maxid].display();
}*/
/*#include <iostream>
using namespace std;
class largest{
    public:
    int *arr;
    int max_no=0;

    void get(){
        arr=new int[5]; // allocate dynamic memory in fuc()
        for(int i=0;i<5;i++){
            cin>>*(arr+i);
            if(*(arr+i)>max_no){
                max_no=*(arr+i);
            }
        }
    }
    void display(){
        cout<<"Largest element: "<<max_no;
    }
};
int main(){
    largest l1;
    l1.get();
    //l1.max();
    l1.display();
}*/
#include <iostream>
using namespace std;
class student{
    public:
    char name[20];
    int rno;
    float cgpa;
    void get(){
        cin>>name>>rno>>cgpa;
    }
    void display(){
        cout<<"Name : "<<name<<" | Rno: "<<rno<<" | Cgpa: "<<cgpa;
        cout<<endl;
    }

};
int main(){
    student *arr;
    arr=new student[5];
    for(int i=0;i<5;i++){
        (arr+i)->get();
    }
    for(int i=0;i<5;i++){
        (arr+i)->display();
    }

    delete []arr;

}