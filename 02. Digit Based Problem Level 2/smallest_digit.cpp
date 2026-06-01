#include<iostream>
using namespace std;

int counter(int number);
int smallest(int number , int counter);


int main(){
    
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    
    int count = counter(number);
    int answer = smallest(number , count);
    cout<<"Smallest number is: "<<answer;
    
    
    return 0;

    
}

int counter(int number){
    
    int count = 0;
    
    
    while(number != 0){
        
        number = number / 10;
        count++;
    }
    
    return count;
    
}

int smallest(int number , int counter){
    int answer;
    int digit;
    
    while(number > 0){
        
        digit = number % 10;
        number = number / 10;
        
        if(digit < answer){
            
            answer = digit;
            
        }
        
    }
    
    return answer;
}

















