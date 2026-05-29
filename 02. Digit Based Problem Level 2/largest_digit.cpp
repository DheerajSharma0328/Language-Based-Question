// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int largest_digit(int number);

int main() {
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    
    int result = largest_digit(number);
    cout<<"Largest digit of "<<number<<" is: "<<result;
    
    
    return 0;
}

int largest_digit(int number){
    int digit;
    int num = 0;
    
    while(number > 0){
        
        digit = number % 10;
        number = number / 10;
        
        if(digit > num){
            num = digit;
        }
    }
    
    return num;
    
}














