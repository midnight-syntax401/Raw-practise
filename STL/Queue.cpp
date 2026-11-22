#include<iostream>
#include<queue>

using namespace std;
int main(){
    
    queue<string> q;
    
   q.push("Rakshit");
   q.push("Mehta");
   q.push("Bhardwaj");

   cout<<"size before pop "<<q.size()<<endl;

cout<<"First Element --> "<<q.front()<<endl;
q.pop();
   cout<<"First Element after POP-->"<<q.front()<<endl;

   cout<<"size after pop "<<q.size()<<endl;

}

