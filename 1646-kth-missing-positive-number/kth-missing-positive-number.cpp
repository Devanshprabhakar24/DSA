class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int idx = 0;   // index for arr
        int missingCount = 0;
        int num = 1;   // start from 1

        while (true) {
            if (idx < n && arr[idx] == num) {
                // if num is present in arr, move arr index
                idx++;
            } else {
                // num is missing
                missingCount++;
                if (missingCount == k) return num;
            }
            num++;
        }
    }
};
