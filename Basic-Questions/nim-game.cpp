#include<iostream>
using namespace std ; 
bool nim_game(int N){
    if (N % 4 != 0){
        return 0;
    }
    else{
        return 1;
    }
}
int main (){
    int N;
    cin >> N;
    cout << nim_game(N);
    return 0;
}
