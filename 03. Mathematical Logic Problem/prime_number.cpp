#include<iostream>
using namespace std;


int prime_number(int number);

int main(){
    
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    
    int prime = prime_number(number);
    if(prime == 0){
        cout<<number<<" is not a prime number";
    }
    else{
        cout<<number<<" is a prime number";
    }
    
    
    return 0;
}

int prime_number(int number){
    
    for(int i=2; i<number; i++){
        
        if(number % i == 0){
            return 0;
        }
    }
    
    return 1;
    
}
