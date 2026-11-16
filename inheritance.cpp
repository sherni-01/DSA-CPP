/*#include <iostream>
using namespace std;
class student{ //base class 
    string name;
    int roll;
protected:
    int age;
public:
    void get(){
        cout<<"Enter name , roll, age : "<<endl;
        cin>>name>>roll>>age;
        cout<<"Name , roll, age: "<<name<<" "<<roll<<" "<<age<<endl;
    }
};
class course : public student{   //derived class
    string course_name;
    int course_code;
    int marks;
    public:
    void getc(){
        cout<<"Enter Enter c_name , c_code , marks: "<<endl;
        cin>>course_name>>course_code>>marks;
    }
    void putc(){
        cout<<"c_name , c_code , marks : "<<course_name<<" "<<course_code<<" "<<marks<<endl;
    }
};
int main(){
    course obj;
    obj.getc();
    obj.putc();
    obj.get();
    return 0;
}*/
/*#include <iostream>
using namespace std;
class employee{
    int id;
    protected:
    int salary;// private mem can never be accessed by derived so protected
    public:
    void get(){
        cout<<"Enter id: ";cin>>id;
        cout<<"Enter salary: ";cin>>salary;
        cout<<"Id: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;

    }
};
class manager: private employee{
    int bonus;
    public:
    void getb(){
        get(); // became private for derived 
        cout<<"Enter bonus: ";cin>>bonus;
        cout<<"Bonus: "<<bonus<<endl;
    }
    void display(){
        cout<<"Total salary: "<<bonus+salary<<endl;
    }
};
int main(){
    manager obj;
   // obj.get();
    obj.getb();
    obj.display();
}*/
/*#include <iostream>
using namespace std;
class teacher{
    
    int no_courses;
    public:
    int get_no(){
        cout<<"Enter no of courses: ";
        cin>>no_courses;
        return no_courses;
    }
};
class resercher{
    
    int papers;
    public:
        int get_papers(){
            cout<<"Enter number of papers: ";
            cin>>papers;
            return papers;
        }
};
class faculty:public teacher,public resercher{
    public:
        void display(){
            int c=get_no();
            int p=get_papers();
            int c_contri=c*10;
            int p_contri=p*5;
            cout<<"Total contibution: "<<c_contri+p_contri;
        }
};
int main(){
    faculty obj;
    obj.display();
}*/
/*#include <iostream>
using namespace std;

class light{
    int flag_l;
    protected:
    bool switch_l(){
        cout<<"On light? ";
        cin>>flag_l;
        return flag_l;
    }
};
class fan{
    int flag_f;
    protected:
    bool switch_f(){
        cout<<"On fan?: ";
        cin>>flag_f;
        return flag_f;
    }
};
class smartroom:private light,private fan{
    public:
    void activateroom(){
        if(switch_f()){
            cout<<"Fan is runnig."<<endl;
        }else{
            cout<<"Fan offed."<<endl;
        }

        if(switch_l()){
            cout<<"Light is blomming."<<endl;

        }else{
            cout<<"Room dark"<<endl;
        }

    }
};
int main(){
    smartroom obj;
    obj.activateroom();
}*/
/*#include <iostream>
using namespace std;
class shape{
    int length;
    int breadth;
    public:
    int get_l(){
        cout<<"Enter length: ";
        cin>>length;
        return length;
    }
    int get_b(){
        cout<<"Enter bredth: ";
        cin>>breadth;
        return breadth;
    }
};
class rectangle:private shape{
    
    public:
    void display(){
        int l=get_l();
        int b=get_b();
        cout<<"Area of rec: "<<l*b<<endl;
    }
};
class square:private shape{
    
    public:
    void display(){
        int l=get_l();
        cout<<"Area of square: "<<l*l;
    }
};
int main(){
    rectangle r;
    r.display();
    square s;
    s.display();
}*/
/*#include <iostream>
using namespace std;
class student{
    protected:
    int roll;
    public:
    void getno(){
        cout<<"Enter roll: ";
        cin>>roll;
    }
    void putno(){
        cout<<"Roll: "<<roll<<endl;
    }
};
class test:protected student{
    protected:
    int s1,s2,s3;
    public:
    void getm(){
        cout<<"Enter marks of s1: ";
        cin>>s1;
        cout<<"Enter marks of s2: ";
        cin>>s2;
        cout<<"Enter marks of s3: ";
        cin>>s3;
    }
    void putm(){
        cout<<"Marks are : "<<s1<<" "<<s2<<" "<<s3<<endl;
    }

};
class result:protected test{
    protected:
        int total;
    public:
        void display(){
            getno();
            putno();
            getm();
            putm();

            total=s1+s2+s3;
            
            cout<<"\nTotal marks: "<<total;
        }
};
int main(){
    result r;
    r.display();
}*/
/*#include <iostream>
using namespace std;
class student{
    public:
        string name;
        void get(){
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Name: "<<name<<endl;
            
        }
};
class academic:public student{
    public:
        int m1,m2;
        void getm(){
            cout<<"Enter m1 m2 : ";cin>>m1>>m2;
            cout<<"Total: "<<m1+m2<<endl;
        }
};
class sport: public student{
    public:
        string grade;
        void getg(){
            cout<<"Enter grade: ";
            cin>>grade;
            cout<<"Grade: "<<grade<<endl;
        }
};
class result : virtual public academic,virtual public sport{
    public:
        void display(){
            get();
            getm();
            getg();
        }
        
};
int main(){
    result r;
    r.display();
}
*/
/*#include <iostream>
using namespace std;
class M{
    protected:
        int m;
    public:
        M(int x):m(x){
            cout<<"M: "<<m<<endl;
        }
        ~M(){
            cout<<"Dectructor M"<<endl;
        }

};
class N{
    protected:
        int n;
    public:
        N(int y):n(y){
            cout<<"N: "<<y<<endl;
        }
        ~N(){
            cout<<"Dectructor N"<<endl;
        }
};
class P:public M,public N{
    private:
        int p;
    public:
        P(int a,int b):N(a),M(b){ //M(a),N(b) there is no change in invokation of base class
            cout<<"X Y : "<<a<<" "<<b<<endl;
        }
        ~P(){
            cout<<"Dectructor P"<<endl;
        }
};
int main(){
    P ob(2,3);
    return 0;
}*/
/*#include <iostream>
using namespace std;
class abc{
    private:
        int x,y,z;
    public:
        abc(int a,int b,int c){
            x=a;y=b;z=c;
        }
        void display(){
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
        void operator++(int){
            x++;y++;z++; 
        }
        void operator++(){
            ++x;++y;++z; 
        }
        void operator--(){
            --x;--y;--z; 
        }
};
int main(){
    abc ob(1,2,3);
    ob.display();
    ++ob;   //ob.operator++(int);
    cout<<"Prefix ++ : ";
    ob.display();
    ob++;   //ob.operator++();
    cout<<"Postfix ++ : ";
    ob.display();
    --ob;   //ob.operator--();
    cout<<"Prefix -- : ";
    ob.display();

    return(0);
}*/
/*#include <iostream>
using namespace std;
class abc{
    private:
        int x,y,z;
    public:
        abc(int a,int b,int c){
            x=a;y=b;z=c;
        }
        void display(){
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
        void operator--(){
            --x;--y;--z; 
        }

};
int main(){
    abc ob(1,2,3);
    ob.display();
    --ob;   //ob.operator--();
    cout<<"Prefix -- : ";
    ob.display();


    return(0);
}*/
//overload ++ prefix &  post op as friend;
/*#include <iostream>
using namespace std;
class abc{
    public:
    int a;
    
        abc(int x){
            a=x;
        }
        friend void operator++(abc&);
        friend void operator++(abc&,int);
        void display(){
            cout<<"a: "<<a<<endl;

        }
};
void operator++(abc &ob){
    ob.a=++ob.a;
}
void operator++(abc &ob,int){
    ob.a=ob.a++;
}
int main(){
    abc ab(5);
    ab.display();
    ++ab;
    cout<<"Prefix : ";
    ab.display();
    ab++;
    cout<<"Postfix : ";
    ab.display();
}*/
/*#include <iostream>
using namespace std;
class abc{
    int a,b;
    public:
    abc(int x,int y){
        a=x;b=y;
    }
    int operator+(abc s1){
        return(a+s1.b);
    }
    int operator-(abc s2){
        return(a-s2.b);
    }
    int operator*(abc m1){
        return(a*m1.a);
    }
    int operator/(abc d1){
        return(d1.b/a);
    }

};
int main(){
    int d;
    abc s(5,10),t(10,20);
    d=s+t;  //s will call the fun t ob is passed as agr
    cout<<"Sum "<<d<<endl;
    d=s-t;
    cout<<"Sub "<<d<<endl;
    d=s*t;
    cout<<"Mul "<<d<<endl;
    d=s/t;
    cout<<"Div "<<d<<endl;
    return(0);
}*/
//create class complex with mem x,y
/*#include <iostream>
using namespace std;
class complex{
    public:
        int x,y;
        complex(){x=10;y=20;}
        complex(int a,int b){
            x=a;y=b;
        }
        complex operator+(complex c){
            complex temp;
            temp.x=x+c.x;
            temp.y=y+c.y;
            return(temp);
        }
        void show(){
            cout<<x<<"+i"<<y;
        }
        
};
int main(){
    complex s(5,10),t(10,20),q;
    q=s+t;
    q.show();
}*/

//do above wala with friend 
/*#include <iostream>
using namespace std;
class Distance{
    int km,m;
    public:
    Distance(){
        km=m=0;
    }
    Distance(int val){
        km=val/1000;
        m=val-(km*1000);
    }
    void show(){
        cout<<km<<" Km "<<m<<" m "<<endl;
    }
};
int main(){
    int val;
    cout<<"Enter distance: ";cin>>val;
    Distance d1;
    d1=val;
    d1.show();

    return(0);
}*/
/*#include <iostream>
using namespace std;
class Area{
    double radius;
    public:
    Area(){
        radius=0.0;
    }
    void get_data(int r){
        radius=r;
    }
    operator double(){
        int area=3.14*radius*radius;
        return area;
    }
};
int main(){
    Area a1;
    int r;
    cout<<"Enter radius : ";cin>>r;
    a1.get_data(r);
    double area;
    area=a1;
    cout<<"Area : "<<area;
}*/
/*#include <iostream>
using namespace std;
struct A{
    int x;

};
class B{
    int y;
    public:
    void set(){
        y=20;
    }
    void display(){
        cout<<y;
    }
};

int main(){
    struct A a;
    a.x=10;
    B b;
    b.set();
    cout<<a.x<<" ";
    b.display();
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main(){
    int size;cout<<"Enter size: ";cin>>size;
    double *arr=new double[size];
    int sum=0;
    for(int i=0;i<size;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int avg=sum/size;
    cout<<"Average : "<<avg;
    delete []arr;

    return 0;
}*/
/*#include <iostream>
using namespace std;
int main(){
    int size;cout<<"Enter size: ";cin>>size;
    int *arr=new int[size];
    for(int i=0;i<size;i++){
        cin>>*(arr+i);
    }
    int key;cout<<"Enter element to find : ";cin>>key;
    int found=0;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            found=1;
            cout<<"Found at index: "<<i;
            break;
        }
    }
    if(found==0){
        cout<<"Element not present in array !";
    }
    
}*/
/*#include <iostream>
using namespace std;
int main(){
    int *var=new int;
    cin>>*var;
    int rev=0;
    int nvar=*var;
    while(nvar>0){
        int d=nvar%10;
        rev=d+rev*10;
        nvar=nvar/10;
    }
    if(rev==*var){
        cout<<"Palindrome";
    }else{
        cout<<"Non palindrome!";
    }
    delete var;

}*/
/*#include <iostream>
using namespace std;
class student {
    public:
        int roll;
        int marks;
        string name;
        void fun(){
            cin>>roll>>marks>>name;    
        }
        void put(){
            cout<<name<<" "<<roll<<" "<<marks<<endl;
        }
};
int main(){
    student *p=new student[2];
    for(int i=0;i<2;i++){
        (p+i)->fun();//
    }
    for(int i=0;i<2;i++){
        (*(p+i)).put();//p[i].put();
    }
    delete []p;
}*/
/*#include <iostream>
using namespace std;
class student {
    public:
        int roll;
        int marks;
        string name;
        student(){
            cin>>roll>>marks>>name;
            cout<<name<<" "<<roll<<" "<<marks<<endl;
        }
        ~student(){
            cout<<"deallocated";
        }
};
int main(){
    student *p=new student;
    
    delete p;
}*/
#include <iostream>
using namespace std;
class student{
    public:
        int s;
        int *marks;
        int sum=0;int i=0;
        student(int size){
            s=size;
        marks=new int[size];
        }
        void initilize(int val){
            marks[i++]=val;
            sum+=val;
        }
        void avg(){
            cout<<"Avg: "<<(float)sum/s;
        }
        ~student(){
        delete []marks;
        }

};
int main(){
    int size;cout<<"Enter size: ";cin>>size;
    student ob1(size);
    int val;
    for(int i=0;i<size;i++){
        cin>>val;
        ob1.initilize(val);
    }
    ob1.avg();
    return 0;
}