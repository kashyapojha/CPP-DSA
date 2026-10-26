#include<iostream>
#include<string>
#include <algorithm>
using namespace std ; 

void groupAnagrams(string arr[] ,  int n){
    for (int i = 0 ; i < n ; i++){
        for (int j = i + 1 ; j < n; j++){
            string s1 = arr[i];
            string s2 = arr[j];
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());
            
            if (s1 == s2) {
                // matching anagrams
                cout << arr[i] << "and " << arr[j] << "are anagrams" << endl;
            }
        }
    }
}




int main (){
    string arr[1000] ; 
    int n;
    cout << "Enter the length of array";
    cin >> n ;
    cout << "Enter the elements of array";
    for (int i = 0; i < n ; i++){
        cin >> arr[i];
    }
    groupAnagrams(arr,n);
    return 0 ;
}