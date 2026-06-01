#include<iostream>
using namespace std;

int factorial(int number);

int main(){
    
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    
    int factorialans = factorial(number);
    cout<<"Factorial of "<<number<<" is "<<factorialans;
    
    
    return 0;
}

int factorial(int number){
    int factorial = 1;
    
    if(number == 0){
    
        return factorial;
        
    }
    
    for(int i=1; i<=number; i++){
        
        factorial = factorial * i;
        
    }
    
    return factorial;
    
}














