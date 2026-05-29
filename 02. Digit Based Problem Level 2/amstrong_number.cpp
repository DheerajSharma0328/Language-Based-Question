#include<iostream>
using namespace std;

int digit_count(int num);
int armstrong_number(int num , int count);
int power(int num , int powe);

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int count;
    
    count = digit_count(number);
    cout<<"Count: "<<count;
    
    int armstrongnumber = armstrong_number(number , count);
    
    if(number == armstrongnumber){
        cout<<number<<" is an Armstrong Number ";
    }
    else{
        cout<<number<<" is not an Armstrong Number ";
    }
    
    return 0;
}


int digit_count(int num){
    int count;
    while(num != 0){
        num = num / 10;
        count++;
    }
    cout<<"Count "<<count<<endl;
    return count;
}

int armstrong_number(int num , int count){
    
    int remain;
    int orgnum = num;
    int armstrong = 0;
    
    while(num > 0){
        
    int product = 0;
        remain = num % 10;
        cout<<"Remain: "<<remain<<endl;
        num = num /10;
        cout<<"Num: "<<num<<endl;
        
        product = power(remain , count);
        
        cout<<"Product: "<<product<<endl;
        
        armstrong = armstrong + product;
        
    }
    
    return armstrong;
    
}

int power(int num , int powe){
    
    int product = 1;
    for(int i = 0; i< powe ; i++){
        product = num * product;
    }
    
    return product;
    
}






















