/*
#include<iostream>
using namespace std ; 
int main (){
int n , i , j , count = 0; 
cout << "Enter the length of array:- ";
cin >> n;

int nums[n];
cout << "Enter the elements of array :- ";

for (int i = 0; i < n; i++){
    cin >> nums[i];
}
cout << "Array elements are :";
for (int i = 0; i < n ; i++){
    cout << nums[i] << " ";
}

for (i = 0; i < n ; i++){
    for ( j = i + 1; j < n; j++){
        if (nums[i] == nums [j]){
            count ++ ;
            break;
        }
    }
}
if (count > 0) {
    cout << "duplicate element found";
}
else {
    cout <<"duplicate element not found";
}
}


*/

#include<iostream>
#include<vector>
using namespace std; 
    int n , i , j , count = 0;
    bool duplicate_element(vector<int> nums){
        int n = nums.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                return true;
            }
        }
    }
    return false;
    }

int main() {
    int n;

    cout << "Enter the length of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    if (duplicate_element(nums)) {
        cout << "\nDuplicate elements found";
    } else {
        cout << "\nDuplicate elements not found";
    }

    return 0;
}