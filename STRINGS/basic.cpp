#include<iostream>
using namespace std;

// upper to lower---> ch-'A'+'a'
// Lower to upper---> ch-'a'+'A'
// number conversion--->ch-'0'

char toLowerCase(char ch){
    if(ch>='a' && ch<='z')
    return ch;
      else{
        char temp=ch-'A'+'a';
        return temp;
      }
}


bool checkpalindrome(char a[], int n){
    int s=0;
    int e=n-1;

    while(s<=e){

        // Now its case sensitive
        if(toLowerCase(a[s])!=toLowerCase(a[e])){
            return 0;
        }else{
            s++;
            e--;
        }
    }
    return 1;
}


void reverse(char name[], int n){
    int s=0;
    int e=n-1;

    while(s<e){
        swap(name[s++], name[e--]);
    }
}


int getLength(char name[]){

    int count=0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}


int main(){
    char name[20];

    cout<<"Your name is--> "<<endl;
    cin>>name;
//name[2]='\0';

    cout<<"Your name is ";
    cout<<name<<endl;

    int len=getLength(name);

    cout<<"Length: "<<len<<endl;

    reverse(name, len);

    cout<<"Your name is ";
    cout<<name<<endl;

    cout<<"Palindrome or not: "<<checkpalindrome(name, len)<<endl;

    cout<<"Character is "<<toLowerCase('b')<<endl;
    cout<<"Character is "<<toLowerCase('B')<<endl;

    return 0;
    
}