#include<iostream>
using namespace std ; 
int main (){
    int a , b; 
    cout << "Enter the value for a:";
    cin >> a;
    cout << "Enter the value for b:";
    cin >> b;
    if (a > b){
    cout<<"value of a is greater than b"<<endl;
    }
    else if (a < b){
    cout<<"value of b is greater than a"<<endl;
    }
    else{
    cout<<"Both values are equal , pls enter different values" <<endl;
    }

}