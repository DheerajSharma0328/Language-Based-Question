#include<iostream>
using namespace std;

int main(){
    
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int b=0;
    
    for(int i=0; i<=a; i++){
        
        b = i%2;
        
        if(b == 0){
            cout<<i<<endl;
        }
    }
    
    return 0;
}