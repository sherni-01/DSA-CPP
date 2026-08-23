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
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    cout<<"element at beg: "<<*vec.begin();
    cout<<"Element at end: "<<*(vec.end()-1);//vec.end() points at nth idx 
}
