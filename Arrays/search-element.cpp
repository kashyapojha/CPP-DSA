class Solution {
  public:
    int search(vector<int>& arr, int X) {
        
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == X)
                return i;
        }
        
        return -1;
    }
};