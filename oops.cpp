#include<iostream>
using namespace std;
 // Function Prototype (tells compiler 'add' exists and takes 2 ints) 
 int add(int, int); 
 int main() { 
    cout << add(5, 10); 
    // Allowed because prototype was declared above 
    return 0; } 
    // Function Definition 
    int add(int a, int b) {
         return a + b; 
        }

