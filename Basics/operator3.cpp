#include<iostream>
using namespace std ; 
int main (){
    int age ;
    cout << "Enter the value of age:-";
    cin >> age ;
    if ( 13 <= age && age <= 19){
        cout <<  "Teenager";
    }
    else{
        cout << "Not a teenager";
    }

    
}