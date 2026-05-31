#include<iostream>
using namespace std;

int counter(int number);
int remove_first(int number , int count , int division );
int division(int count);
int modified_number(int number , int count , int division );


int main(){
    
    int number = 0;
    cout<<"Enter a number: ";
    cin>>number;
    
    int ans = counter(number);
    // cout<<"Count is: "<<ans<<endl;
    
    int divi = division(ans);
    // cout<<"Division by is: "<<divi;
    
    int removefirst = remove_first(number , ans , divi);
    cout<<"First Digit is: "<<removefirst<<endl;
    
    int final = 0;
    final = modified_number( number , ans , divi);
    cout<<"Final number is: "<<final;
    
    
    return 0;
}

int division(int count){
    
    int divi = 1;
    
    for(int i=1; i<count; i++){
        
        divi = divi * 10;
        
    }
    
    return divi;
}

int counter(int number){
    int count = 0;
    
    while(number > 0){
        
        number = number / 10;
        count++;
    }
    
    return count;
}

int remove_first(int number , int count, int division){
    
    int first_digit;
    
    first_digit = number / division;
    
    return first_digit;
}

int modified_number(int number , int count , int division ){
    float first_digit = 0;
    
    first_digit = number % division;
    
    return first_digit;
}















