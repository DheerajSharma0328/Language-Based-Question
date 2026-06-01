#include<iostream>
using namespace std;

int counter(int number);
int division(int total_digit);



int main(){
    
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    
    int last_digit = number % 10;
    cout<<"Last Digit: "<<last_digit<<endl;
    number = number / 10;
    // cout<<number<<endl;
    
    int total_digit = counter(number);
    cout<<"Total Digit Count: "<<total_digit<<endl;
    
    int power = division(total_digit);
    cout<<"Power: "<<power<<endl;
    
    int first_digit = number / power;
    cout<<"First Digit: "<<first_digit<<endl;
    
    number = number % power;
    cout<<"Number After removing first and last digit: "<<number<<endl;
    
    // power = power * 10;
    
    int final = last_digit * power;
    final = final + number;
    final = final * 10;
    final = final + first_digit;
    
    cout<<"Final Number after swapping first and last digit: "<<final;
    
    return 0;
}

int counter(int number){
    
    int count = 0;
    
    while(number > 0){
        
        number = number / 10;
        count++;
        
    }
    
    return count;
    
}

int division(int total_digit){
    int power = 1;
    
    for(int i=1; i<total_digit; i++){
        
        power = power * 10;

        
    }
    
    return power;
}















