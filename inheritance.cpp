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
#include <iostream>
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
}