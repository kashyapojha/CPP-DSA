
#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }

    return {};
}

int main() {
    int n, target;

    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Array is: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "Enter the sum number: ";
    cin >> target;

    vector<int> result = twoSum(nums, target);

    if (result.size() == 2) {
        cout << "Indices are: "
             << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No pair found." << endl;
    }

    return 0;
}
