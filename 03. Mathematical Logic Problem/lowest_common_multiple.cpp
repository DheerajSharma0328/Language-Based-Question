#include<iostream>
using namespace std;


int lowest_multiple(int number1 , int number2);

int main(){
    
    cout<<"Enter two number: "<<endl;
    
    int number1;
    cout<<"Enter Number: ";
    cin>>number1;
    
    int number2;
    cout<<"Enter Number: ";
    cin>>number2;
    
    int lowest_number = lowest_multiple(number1 , number2);
    cout<<"LCM of "<<number1<<" and "<<number2<<" is "<<lowest_number;
    
    return 0;
}


int lowest_multiple(int number1 , int number2){
    
    int answer = 0;
    int i = 1; 
    
    while(answer == 0){
        
        if(i % number1 == 0 && i % number2 == 0){
            
            answer = i;
            
        }
        
        i++;

    }
    
    
    return answer;
}




























