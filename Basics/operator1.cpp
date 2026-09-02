#include<iostream>
using namespace std ; 
int main (){
    int temp;
    cout << "Enter the temperature in Fahrenheit :-";
    cin >> temp;
    if  (70 <= temp && temp < 90){
    cout << "Swimming is possible..";
    }
    else{
    cout << "Swimming is not possible";
    }
}