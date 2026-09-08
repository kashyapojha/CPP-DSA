class Solution {
public:
    int getSecondLargest(vector<int>& arr) {
        int ans = -1;

        // Find largest
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > ans)
                ans = arr[i];
        }

        // Find second largest
        int second = -1;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != ans)
                second = max(second, arr[i]);
        }

        return second;
    }
};