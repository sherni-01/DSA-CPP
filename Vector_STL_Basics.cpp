/*#include<iostream>
#include <vector> 
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);
    vec.pop_back();
    cout<<"Vector size: "<<vec.size()<<endl;
    cout<<"Capacity : "<<vec.capacity()<<endl;//gets double 

    cout<<"Value at idx 2: "<<vec.at(2)<<endl;// or vec[2]
    cout<<"Front: "<<vec.front()<<endl;
    cout<<"End : "<<vec.back()<<endl;


    
    vector<int>vec2(vec);//  copy values of vec to vec2
    //vec.erase(vec.begin());//  always works with .begin()
    vec.erase(vec.begin(),vec.begin()+2);//  range 0-2 where 2 is exclusive
    vec.insert(vec.begin(),0);//  vec.insert(idx,value)
        cout<<"Is empty: "<<vec.empty()<<endl;
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;
    vec.clear(); //size=0 but capacity = something
    cout<<"Is empty: "<<vec.empty()<<endl;
}*/
//....VECTOR ITERATOR....
/*#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    cout<<"element at beg: "<<*vec.begin();
    cout<<"Element at end: "<<*(vec.end()-1);//vec.end() points at nth idx   
    cout<<"Reverse begin: "<<*(vec.rbegin());//last element
    cout<<"Reverse end: "<<*(vec.rend()-1);//vec.rend points before 0th index.
}*/
/*int main(){
    vector<int>vec={1,2,3,4,5};
    vector<int>::iterator it;
    for(it=vec.begin();it!=vec.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    vector<int>::reverse_iterator rt;//replace with auto
    for(rt=vec.rbegin();rt!=vec.rend();rt++){
        cout<<*(rt)<<" ";
    }
    cout<<endl;
    for(auto rt=vec.rbegin();rt!=vec.rend();rt++){
        cout<<*(rt)<<" ";
    }

    return 0;
}*/
//....LIST....(Doubly linked list as element can be insert/poped from back as well as end )
/*#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main(){
    list<int>l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(0);
    l.push_front(-1);
    l.pop_back();
    l.pop_front();
    for(int val:l){
        cout<<val<<" ";
    }
}*/
//....DEQUE....(dynamic ; its element can be accessed through idx)
/*#include <iostream>
#include <vector>
#include <deque>
using namespace std;
int main(){
    deque<int>d={1,2,3};
    cout<<d[0];
}*/
//....PAIR .....(TO GRP TWO SAME /DIFF VALUES)
/*#include <iostream>
#include <vector>
using namespace std;
int main(){
    pair<int,int>p={3,5};
    cout<<p.first;
    cout<<p.second;
    cout<<endl;
    //pair of pairs
    pair<int,pair<char,int>>p1={1,{'a',3}};
    cout<<p1.first<<" ";
    cout<<p1.second.first<<" ";
    cout<<p1.second.second<<" ";
    cout<<endl;
    //vetor of pair
    vector<pair<int,int>>vec={{1,2},{3,4},{5,6}};
    vec.push_back({7,8});//insert pair only 
    vec.emplace_back(4,5);//creates in-place object

    for(pair<int,int> p:vec){//can replace pair<int,int> with auto
        cout<<p.first<<" "<<p.second<<" ";
    }
    cout<<endl;
    return 0;

}*/
//......STACK...
/*#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top()<<endl;//3 because it follows LIFO
    s.pop();
    cout<<s.top()<<endl;
    //cout<< "Values of stack1 : ";
    //while(!s.empty()){
    //    cout<<s.top()<<" ";
    //    s.pop();
    //}
    cout<<"\n";
    stack<int>s2;
    s2.swap(s);
    cout<<"Is s empty ? "<<s.empty()<<endl;
    cout<<"Size of s & s2 : "<<s.size() <<" "<<s2.size()<<endl;
    cout<<"Print values of s2: ";
    while(!s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }
}*/
//....Queue.....
/*#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}*/
//.....PRIORITY QUEUE....(first priority to largest element )
/*#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
    priority_queue<int>pq;
    pq.push(1);
    pq.push(2);
    pq.push(9);
    pq.push(10);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<"\n";
    //Reverse order priority queue
    cout<<"Reverse :  \n";
    priority_queue<int,vector<int>,greater<int>>p;//greater<int> is a functor 
    p.push(1);
    p.push(2);
    p.push(9);
    p.push(10);
    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
}*/
//....MAP.....(key value pairs; keys r unique ;values can be same)
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    map<string,int>m;//(sort data in asc order)
    m["tv"]=100;
    m["lp"]=20;
    m["comp"]=300;
    m.insert({"camera",4});
    m.erase("tv");
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<" ";
    }
    cout<<endl;
    cout<<"No of keys: "<<m.count("lp")<<endl;
    if(m.find("nk") != m.end()){// if the key doesnt exist it returns at the nth index
    cout << "Found";
    }
    else{
      cout << "Not Found";
    }
    return 0;
}
