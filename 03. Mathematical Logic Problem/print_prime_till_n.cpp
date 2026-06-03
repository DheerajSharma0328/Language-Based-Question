#include<iostream>
using namespace std;

void print_prime(int number);

int main(){
    
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    
    print_prime(number);
    
    return 0;
}


void print_prime(int number){
    
    bool isprime = true;
    
    for(int i=2; i<number; i++){
        
        isprime = true;
        
        for(int j=2; j<i; j++){
            
            if(i % j == 0){
                isprime = false;
                break;
            }
            
        }
        
        if(isprime){
            cout<<i<<endl;
        }
        
        
    }
}












