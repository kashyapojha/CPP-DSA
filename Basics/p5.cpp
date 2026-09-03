// while loop 

/*
#include<iostream>
using namespace std ; 
int main (){
    int n , i=1; 
    cout << "Enter the value of n :-";
    cin >> n;
    while (i <= n){
        if (i%2 == 0){
            cout << i <<" ";
        }
        i++;
    }
}

*/

// do while loop 
#include<iostream>
using namespace std ; 
int main (){
    int n , i=1;
    cout << "Enter the value of n:- ";
    cin >> n;
    do{
        if (i % 2 == 0){
            cout << i << " ";
        }
        
        i++;
    } while (i <= n);

}

