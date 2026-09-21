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
/*#include <iostream>
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

}*/
/*#include <iostream>
using namespace std;
class Student {
    public:
        char name[20];
        int rollno;
        int marks;
        void input(){
            cin>>name>>rollno>>marks;
        }
        void display(){
            cout<<"Name,rollno,marks : "<<name<<" "<<rollno<<" "<<marks<<endl;
        }
        void calculateGrade(){
            if(marks>90){
                cout<<"Grade A";
            }
            else if(marks>80){
                cout<<"Grade B";
            }
            else if(marks>70){
                cout<<"Grade C";
            }else if(marks>60){
                cout<<"Grade D";
            }
            else{
                cout<<"Fail";
            }
        }
};

int main(){
    Student obj;
    Student *p= &obj; //pointer to object
    (*p).input(); //obj.input() or p->input()
    //(*p).display();

    int Student::*pmarks=&Student::marks;//pointer to mem
    (*p).*pmarks=91;
    p->display();

    void (Student::*pfun)()=&Student::calculateGrade;//pointer to fun

    (p->*pfun)();//obj.calculateGrade() or p->calculateGrade()

}*/
/*#include <iostream>
using namespace std;
class student{
    public:
        string name;
        int rollno;
        int marks;
        void input(string name,int rollno,int marks){
            this->name=name;
            this->rollno=rollno;
            this->marks=marks;
        }
        void display(){
            cout<<"Name : "<<this->name<<endl;
            cout<<"Roll no: "<<this->rollno<<endl;
            cout<<"Marks : "<<this->marks<<endl;
        }
};
int main(){
    student s1,s2,s3;
    s1.input("Adi",1,98);
    s2.input("Binda",2,97);
    s3.input("Chitra",3,89);

    student *max=&s1;

    if(s2.marks > max->marks){
        max=&s2;
    }if(s3.marks > max->marks){
        max=&s3;
    }

    cout<<"Student with highest marks : \n";
    max->display();

}*/
/*#include <iostream>
using namespace std;
class product{
    public:
        int n;
        string pro;
        int price[100][100];
        int max=INT8_MIN;
        void input(){
            cout<<"Enter pro name: ";
            cin>>pro;
            cout<<"Enter price : ";
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cin>>price[i][j];
                }
            }
        }
        void max_(){
            int i,j;
            for( i=0;i<n;i++){
                for( j=0;j<n;j++){
                    if(max<price[i][j]){
                        max=price[i][j];
                        break;
                    }
                }
            }
            cout<<"Max price: "<<max<<endl;
            cout<<"Position ->  Row: "<<i<<" Col : "<<j;
        }


};
int main(){
    product p1;
    cout<<"Enter n: ";
    cin>>p1.n;
    p1.input();
    p1.max_();
}*/

/*#include <iostream>
using namespace std;
class student{
    public:
        int n;
        int marks[100][100];
        int marks2[100][100];
        int sum_=0;
        
        void input(){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cin>>marks[i][j];
                }
            }
        }
        void trans(){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    marks2[i][j]=marks[j][i];
                }
            }
            
        }
        void sum_di(){
            for(int i=0;i<n;i++){
                sum_+=marks[i][i];
            }
            cout<<"Sum of diagonal : "<<sum_;
        }
        void display(){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<marks2[i][j]<<" ";
                }
                cout<<endl;
            }
        }
};
int main(){
    student s1;
    cout<<"Enter n: ";
    cin>>s1.n;
    cout<<"Enter elements: ";
    s1.input();
    s1.trans();
    cout<<"\nFinal:\n";
    s1.display();

}*/
/*#include <iostream>
using namespace std;
//stoted array bionary search and pointer pointing to arr POINTER WITHIN CLASS WHERE MEMORY ACCOCATED DYNAMICALLY;
class bin{
    public:
         int *ptr;
         int target;

    void get(){
        ptr=new int[5]; // allocate dynamic memory in fuc() // takes memory at run time not compile time 
        cout<<"Enter array element: ";
        for(int i=0;i<5;i++){
            cin>>*(ptr+i);
        }
        cout<<"Enter target: ";cin>>target;
    }
    void binary_(){
        int start=0;
        int end=5-1;
        while(start<=end){
            int mid=start+((end-start)/2);
            if(*(ptr+mid)==target){
                cout<<"Found at index : "<<mid;
                break;
            }else if(*(ptr+mid)>target){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
    }
};
int main(){
    bin b1;
    b1.get();
    b1.binary_();
    
}*/
/*#include <iostream>
using namespace std;
int main(){
    int arr[5]={10,9,8,7,6};
    for(int i=0;i<5;i++){
        int swapped=0;
        for(int j=0;j<5-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped++;
            }
        }
        if(swapped==0 && i==0){
            cout<<"ALready sorted "<<endl;
            break;

        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}*/
/*#include<iostream>
#include<string>
using namespace std;
//find no of vowels and consonents from the user inputed string 
int main(){
    string s;
    getline(cin,s);
    int vowel=0;
    int consonent=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            vowel++;
        }else{
            consonent++;
        }
    }
    cout<<"No of vowels: "<<vowel<<endl;
    cout<<"No of consonent: "<<consonent;
}*/
/*#include<iostream>
#include<string>
using namespace std;
//Find the file extension name and also the idx from where it starts and how many ch extension has 
int main(){
    string s;
    getline(cin,s);
    int st=0;int no_of_ch=0;
    cout<<"Extension: ";
    for(int i=0;i<s.length();i++){
         st=s.find(".");   // or find_last_of('.') 
    }
    for(int i=st;i<s.length();i++){
            cout<<s[i];
            no_of_ch++;
        }
    cout<<"\nExtension starts at idx: "<<st<<endl;
    cout<<"No of ch(s) in extension: "<<no_of_ch<<endl;

}*/
/*#include<iostream>
#include<string>
using namespace std;
//check if inputed phn no is valid if yes replace first 5 with *
int main(){
    string s;
    getline(cin,s);
    if(s.length()>10 || s.length()<10){
        cout<<"Invalid phn no.";
    }else{
        s.replace(0,5,"*****");
        cout<<s<<endl;
    }   
}*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    

}