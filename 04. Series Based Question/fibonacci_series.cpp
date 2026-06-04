#include<iostream>
using namespace std;

int fibonacci_series(int number);

int main(){
    
    int number;
    cout<<"Enter the number for febonacci series: ";
    cin>>number;
    
    int answer = fibonacci_series(number);
    cout<<"Fibonacci Series Sum is: "<<answer;
    
    
    return 0;
}

int fibonacci_series(int number){
    
    int numb1 = 0;
    int numb2 = 1;
    int answer = 0;
    
    cout<<"Fibonacci Series is: "<<endl;
    cout<<numb1<<" "<<numb2<<" ";
    
    for(int i=2; i<number; i++){
        
        answer = numb1 + numb2;
        numb1 = numb2;
        numb2 = answer;
        cout<<answer<<" ";
        
    }   
    cout<<endl;
    return answer;
    
}










