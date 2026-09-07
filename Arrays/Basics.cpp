#include<iostream>
#include <climits>

using namespace std ; 

int main (){
    /*int i ;
    int size;
    cin >> size;
    int arr[1000];  // recommended that array size to be const always in declaration 
    // int arr[6]= {1,2,3,4,5,6};
    // int arr[6] = {1,2,3};
    // int arr[6] = {0};
    for (i = 0; i < size; i++)
    cin >> arr[i];

    for (i = 0; i < size; i++)
    cout << arr[i] << " ";
    */

   // int arr[5]={1,2,3,4,5};
   // cout <<arr[0];     // 1
    //cout <<arr[5];
   // int a;  // 4
    //char a ;  // 1
    // float a;  // 4
   // bool a; // 1
    //cout << sizeof(arr)<<" "; // 20 
   /* int arr[5] = {1,2,3,4,5};
    cout << sizeof(arr)/sizeof(arr[0])<<" ";  // 5
    */


/*
    // Min Value 
    int i;
    int INT_MAX;
    int arr[5] = {2,3,1,7,8};
    int ans = INT_MAX;
    for (i=0;i<5;i++){
        if(arr[i]<ans)
        ans = arr[i];
    }
    cout <<ans;
    return 0;
}
*/

// Max Value 
    int i;
    int arr[5] = {2,3,1,7,8};
    int ans = INT_MIN;
    for (i=0;i<5;i++){
        if(arr[i]>ans)
        ans = arr[i];
    }
    cout << ans;
    return 0;
}