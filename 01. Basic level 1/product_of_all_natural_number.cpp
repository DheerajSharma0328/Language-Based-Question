#include<iostream>
using namespace std;

int main(){
    
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int b=1;
    
    for(int i=1; i<=a; i++){
        
        b = b*i;
    }
    
    cout<<"Sum of all natural number is: "<<b;
    
    return 0;
}