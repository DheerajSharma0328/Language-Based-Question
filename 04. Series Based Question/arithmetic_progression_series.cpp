#include<iostream>
using namespace std;

void arithmetic_progression(int first_number , int total_number ,  int difference);

int main(){
    
    int first_number;
    cout<<"Enter the number from which you want to print the series: ";
    cin>>first_number;
    
    int total_number;
    cout<<"Enter How many number you want in AP Series: ";
    cin>>total_number;
    
    int difference;
    cout<<"Enter the difference you want in AP: ";
    cin>>difference;
    
    arithmetic_progression(first_number , total_number , difference);
    
    return 0;
    
}

void arithmetic_progression(int first_number , int total_number , int difference){
    
    int answer = 0;
    
    cout<<first_number<<" ";

    for(int i = 1; i<total_number; i++){
        
        answer = first_number + difference;
        first_number = answer;
        
        cout<<answer<<" ";
        
    }

    
}
