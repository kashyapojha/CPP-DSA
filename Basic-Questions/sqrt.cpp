#include<iostream>
using namespace std; 
int main (){
    int x , i , sqrt_x = 0; 
    cout << "Enter the value of x:";
    cin >> x;
    if (x<=0){
        cout << "Enter valid value of x";
    }
    else{
        for (i=1 ; i * i <= x ; i++){
            sqrt_x=i;
               
            }
             cout <<"Sqrt of x is:"<< sqrt_x;
         }
    }

/*
class Solution {
public:
    int mySqrt(int x) {
        if (x <= 0)
            return 0;

        int sqrt_x = 0;

        for (int i = 1; i <= x; i++) {

            if (i > INT_MAX / i)
                break;

            if (i * i <= x)
                sqrt_x = i;
            else
                break;
        }

        return sqrt_x;
    }
};
*/