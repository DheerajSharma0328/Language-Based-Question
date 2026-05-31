#include<iostream>
using namespace std;

int main(){
    
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int remain;
    int revnumber = 0;
    int orgnum = number;
    
    cout<<"Original number is :"<<number<<endl;
    
    while(number > 0){
        remain = number%10;
        number = number/10;
        revnumber = revnumber + remain;
        
    }
    
    cout<<"Sum of digit: "<<revnumber;
    
    
    
    return 0;
}