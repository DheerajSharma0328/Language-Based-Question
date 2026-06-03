#include<iostream>
using namespace std;

int cube_series(int number);

int main(){
    
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    
    cube_series(number);
    
    return 0;
    
}

int cube_series(int number){
    
    int answer = 1;
    
    cout<<"Cube series is: ";
    
    for(int i=1; i<=number; i++){
        
        int cube = i*i*i;
        answer = answer + cube;
        cout<<cube<<" ";
        
    }
    
    cout<<endl<<"Cube Series Sum is: "<<answer;
    
    return answer;
    
}