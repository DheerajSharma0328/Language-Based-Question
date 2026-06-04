#include<iostream>
using namespace std;

void arithmetic_progression(int first_number , int total_number ,  int ratio);

int main(){
    
    int first_number;
    cout<<"Enter the number from which you want to print the series: ";
    cin>>first_number;
    
    int total_number;
    cout<<"Enter How many number you want in GP Series: ";
    cin>>total_number;
    
    int ratio;
    cout<<"Enter the Ratio you want in GP: ";
    cin>>ratio;
    
    arithmetic_progression(first_number , total_number , ratio);
    
    return 0;
    
}

void arithmetic_progression(int first_number , int total_number , int ratio){
    
    int answer = 1;
    
    cout<<first_number<<" ";

    for(int i = 1; i<=total_number; i++){
        
        answer = first_number * ratio;
        first_number = answer;
        
        cout<<answer<<" ";
        
    }

    
}
