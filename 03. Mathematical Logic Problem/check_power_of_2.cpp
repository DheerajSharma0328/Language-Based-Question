#include<iostream>
using namespace std;

int power_of_two(int number);

int main(){
    
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    
    int answer = power_of_two(number);    
    
    if(answer == 1){
        cout<<"Yes number is power of 2: "<<endl;
    }
    else{
        cout<<"No number is not power of 2: "<<endl;
    }
    
    return 0;
}

int power_of_two(int number){
    
    int answer = 0;
    
    while(number >= 0){
        
        // cout<<"Enter"<<endl;
        
        if(number % 2 == 0){
        
        // cout<<"Enter1"<<endl<<endl;    
            number = number / 2;
            answer = number;
            // cout<<"Answer"<<answer<<endl;
            
            if(answer == 1){
                // cout<<"in";
                answer = 1;
                return answer;
            }
            
        }
        else{
            return -1;
        }
        
    }
    
    return 0;
    
}













