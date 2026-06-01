#include<iostream>
using namespace std;

int counter(int number);
int splitter(int number , int count);
int factorial(int number);


int main(){
    
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    
    int count = counter(number);
    cout<<count<<endl;
    int result = splitter(number , count);
    
    cout<<result<<endl;
    
    cout<<"Result"<<result<<endl;
    cout<<"Number"<<number<<endl;
    
    if(result == number){
        cout<<number<<" is a strong number";
    }else{
        cout<<number<<" is not a strong number";
    }
    
    return 0;
    
}

int counter(int number){
    int count = 0;
    
    while(number !=0){
        number  = number / 10;
        count++;
    }
    
    return count;
}

int splitter(int number , int count){
    
    int split = 0;
    int factsum = 0;
    
    while(number > 0){
        
        split = number % 10;
        cout<<"split"<<split<<endl;
        number = number / 10;
        cout<<"splitnum"<<number<<endl;
        factsum = factsum + factorial(split);
        cout<<"factsum"<<factsum<<endl;
        
    }
    
    return factsum;
}

int factorial(int number){
    
    cout<<"factnum"<<number<<endl;

    int fact = 1;
    for(int i=1; i<=number; i++){
        fact = fact * i;
    }
    
    cout<<"fact"<<fact<<endl;
    
    return fact;
}