#include<iostream>
using namespace std; 
int main (){
    int n , i = 1; 
    cout << "Enter the value for n:-";
    cin >> n;
    while (i <= n){
        if (i % 3 == 0 || i % 5 == 0){
            i++;
            continue;
        }
        cout << i << " ";
        i++;        
    }
}