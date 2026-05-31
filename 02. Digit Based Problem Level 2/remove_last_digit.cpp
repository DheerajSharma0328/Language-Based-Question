#include<iostream>
using namespace std;

int main(){
    
    int number = 0;
    cout<<"Enter a number: ";
    cin>>number;
    
    int last_digit = number % 10;
    cout<<"Last Digit is: "<<last_digit<<endl;
    
    int modified_number = number / 10;
    cout<<"Number after last digit is removed: "<<modified_number;
    
    return 0;
}















