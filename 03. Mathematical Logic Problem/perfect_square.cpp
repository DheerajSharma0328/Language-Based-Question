#include<iostream>
using namespace std;

int perfect_square(int number);

int main(){
    
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    
    int answer = perfect_square(number);
    
    if(answer != 0){
        
        cout<<number<<" is a perfect square of: "<<answer;
        
    }
    
    return 0;
}


int perfect_square(int number){
    
    int square = 0;
    
    for(int i=1; i<number; i++){
        
        if(number == i*i){
            
            square = i;
            break;
            
        }
        
            cout<<i<<endl;
    }
    
    return square;
    
}
