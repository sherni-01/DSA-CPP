//....STRINGS....
#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

//....CHARACTER ARRAY FUNCTIONS....


void printEachCharacter(char str[], int size){
      //to print each character
    for(int i=0;i<size;i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;

    /*for(char ch: str){   
        cout<<ch<<" ";
    }
    cout<<endl;*/
}
    


int findLength(char str[]){
    //to find length
    int len=0;
    for(int i=0; str[i]!='\0'; i++){
        len++;
    }
    return len;
}

void reverseCharArray(char str[],int len){
    //REVERSE A CHAR ARRAY
    int start=0,end=len-1;

    while(start<=end){
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}

//....STRING FUNCTIONS....

void reverseString(string &str){
    //....REVERSE STRING
    reverse(str.begin(),str.end());
}

int main(){

    //CHARACTER ARRAY

    char str[]={'a','b','c','d','\0'};

    cout<<str<<endl;

    cout<<"length of str: "<<strlen(str)<<endl;

    //char lit[]="hello\0"; //STRING LITERAL

    //char str2[10];

    //cout<<"Enter char array: ";

    //cin>>str2;//will terminate as soon as space is entered

    //cin.getline(str2,100);

    //cin.getline(str2,10,'$');//cin.getline(str,size,delimiter)

    //cout<<"output: "<<str2<<endl;

    printEachCharacter(str,strlen(str));

    int len=findLength(str);

    cout<<"Length of str is : "<<len<<endl;

    reverseCharArray(str,len);

    cout<<"Reverse char arr : "<<str<<endl;

    //....STRINGS....

    string str1="apnacollegelpu"; //dynamic

    str1="hello"; //str is resized now ;;this is not possible with character arrays

    cout<<str1<<endl;

    reverseString(str1);

    cout<<"reversed string : "<<str1<<endl;

    return 0;
}