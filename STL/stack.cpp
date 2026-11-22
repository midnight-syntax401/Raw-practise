#include<iostream>
#include<stack>

using namespace std;
int main(){
   stack<string> s;

   s.push("Rakshit");
   s.push("Mehta");
   s.push("Bhardwaj");

   cout<<"Top Element-->"<<s.top()<<endl;

   s.pop();
   cout<<"Top Element--> "<<s.top()<<endl;

   cout<<" Size of Stack-->"<<s.size()<<endl;

   cout<<"Empty or not "<<s.empty()<<endl;

}

