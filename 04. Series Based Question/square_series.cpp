#include<iostream>
using namespace std;

int square_series(int number);

int main(){
    
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    
    square_series(number);
    
    return 0;
    
}

int square_series(int number){
    
    int answer = 1;

    cout<<"Square series is: ";
    
    for(int i=1; i<=number; i++){
        
        int square = i*i;
        answer = answer + square;
        cout<<square<<" ";
        
    }
    
    cout<<endl<<"Square Series Sum is: "<<answer;
    
    return answer;
    
}