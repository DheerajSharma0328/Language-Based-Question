// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int hcf(int number1, int number2);

int main() {
    
    cout<<"Enter two number to find the HCF: "<<endl;
    
    int number1;
    cout<<"Enter a number: ";
    cin>>number1;
    
    int number2;
    cout<<"Enter a number: ";
    cin>>number2;
    
    int bigcommon = hcf(number1 , number2);
    cout<<"HCF of "<<number1<<" and "<<number2<<" is: "<<bigcommon<<endl;

    return 0;
}

// void hcf(int number1 , int number2){
    
//     int i = 0;
//     int j = 0;
    
//     cout<<"First number LCM: "<<endl;
    
//     for(i=2; i<number1;){
        
//         if(number1 % i == 0){
//             cout<<"HCF = "<<i<<endl;
//             number1 = number1 / i;
//         }
//         else{
//             i++;
//         }
        
//         // cout<<"I = "<<i<<endl;
        
//     }
//         cout<<"HCF = "<<i<<endl;
        
//     cout<<"Second number LCM: "<<endl;
        
//     for(j=2; j<number2;){
        
//         if(number2 % j == 0){
//             cout<<"HCF = "<<j<<endl;
//             number2 = number2 / j;
//         }
//         else{
//             j++;
//         }
        
//         // cout<<"I = "<<i<<endl;
        
//     }
//         cout<<"HCF = "<<j;
    
// }

int hcf(int number1, int number2){
    
    int big = 0;
    int bigcommon = 1;
    
    if(number1 > number2){
        big = number1;
    }
    else{
        big = number2;
    }
    
    for(int i=2; i<big; i++){
        
        if(number1 % i == 0 && number2 % i ==0){
         
            bigcommon = i;

        }
        
    }
    
    return bigcommon;
    
}






















