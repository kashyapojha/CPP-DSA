#include<iostream>
using namespace std ; 

int dec_bin(int n , int rem[]){
    if (n == 0){
        rem[0] = 0;
        return 1;
    }
    else {
        int i = 0;
        while (n > 0){
        rem[i]= n % 2;
        n = n / 2;
        i++;
        }   
        return i ; 
    }
}
void flip_bit(int a_bin[], int b_bin[], int size){
    for (int i = 0 ; i < size; i++){
    if (a_bin[i]!=b_bin[i]){
        a_bin[i]=b_bin[i];
    }
}
}
int main (){
    int a , b , size ;
    int a_bin[32], b_bin[32];
    int rem [32];
    cout << "Enter the value of a:-";
    cin >> a;
    cout << "Enter the value of b:-";
    cin >> b;
    int a_size = dec_bin(a, a_bin);
    int b_size = dec_bin(b, b_bin);
     if (a_size > b_size)
        size = a_size;
    else
        size = b_size;
    for (int i = a_size; i < size; i++) {
        a_bin[i] = 0;
    }
    for (int i = b_size; i < size; i++) {
        b_bin[i] = 0;
    }

    flip_bit(a_bin, b_bin, size);
    cout << "After flipping a: ";

for (int i = size - 1; i >= 0; i--) {
    cout << a_bin[i];
}

cout << endl;

    return 0;
}