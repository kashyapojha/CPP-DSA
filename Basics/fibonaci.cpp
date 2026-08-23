#include<iostream>
using namespace std ; 
int main(){
    int i,n , first_number = 0 , second_number = 1  , third_number ; 
    cout << "Enter the number of terms" ;
    cin >> n ; 
    for (i = 0 ; i<=n ; i++){
        cout << first_number << " ";

        third_number = second_number + first_number;
        first_number = second_number ; 
        second_number = third_number ; 

    }
}