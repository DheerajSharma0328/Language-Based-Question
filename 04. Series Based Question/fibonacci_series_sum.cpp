#include<iostream>
using namespace std;

int fibinacci_sum(int number);

int main(){
    
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    
    int answer = fibinacci_sum(number);
    cout<<endl<<"Sum of Fibinacci Series: "<<answer;
 
 return 0;
    
}


int fibinacci_sum(int number){
    
    int numb1 = 0;
    int numb2 = 1;
    int answer = 0;
    
    
    
    cout<<"Fibonacci Series is: ";
    cout<<numb1<<" ";
    
    for(int i=2; i<= number; i++){
        
        answer = numb1 + numb2;
        numb2 = numb1;
        numb1 = answer;
        
        
        cout<<answer<<" ";
        
}
 
    return answer;
    
}











