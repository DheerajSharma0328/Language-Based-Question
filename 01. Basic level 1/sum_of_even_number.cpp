#include<iostream>
using namespace std;

int main(){
    
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int b=0;
    int c=0;
    
    for(int i=1; i<=a; i++){
        
        b = i%2;
        
        if(b==0){
            c = c+i;
        }
    }
    
    cout<<"Sum of all even number is: "<<c;
    
    return 0;
}