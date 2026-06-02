#include<iostream>
using namespace std;

int power_number(int number, int power);

int main(){
    
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    
    int power;
    cout<<"Enter a Power: ";
    cin>>power;
    
    int answer = power_number(number , power);
    cout<<"Power of "<<number<<" is "<<power<<" Number is: "<<answer<<endl;
    
    return 0;
}

int power_number(int number, int power){
    
    int answer = 1;
    
    for(int i=1; i<=power; i++){
        
        answer = answer * number;
        
    }
    
    return answer;
    
}













