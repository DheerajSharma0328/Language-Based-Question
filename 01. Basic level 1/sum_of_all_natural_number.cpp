#include<iostream>
using namespace std;

int main(){
    
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int b=0;
    
    for(int i=0; i<=a; i++){
        
        b = b+i;
    }
    
    cout<<"Sum of all natural number is: "<<b;
    
    return 0;
}