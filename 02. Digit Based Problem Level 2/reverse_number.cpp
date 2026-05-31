#include<iostream>
using namespace std;

int main(){
    
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int remain;
    int revnumber = 0;
    
    cout<<"Original number is :"<<number;
    
    while(number > 0){
        remain = number%10;
        number = number/10;
        revnumber = (revnumber * 10) + remain;
        
    }
    
    cout<<"Reverse number is :"<<revnumber;
    
    
    
    return 0;
}