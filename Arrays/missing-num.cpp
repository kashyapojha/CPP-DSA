class Solution {
public:
    int missingNum(vector<int>& arr) {

        long long n = arr.size() + 1;
        long long sum = 0;

        // Sum of elements
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
        }

        // Sum from 1 to n
        long long ans = n * (n + 1) / 2;

        return ans - sum;
    }
};