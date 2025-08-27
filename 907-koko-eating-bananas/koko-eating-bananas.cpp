class Solution {
public:
    long long findMax(vector<int> &piles) {
        long long maxi = LLONG_MIN;
        for (int i = 0; i < piles.size(); i++) {
            maxi = max(maxi, (long long)piles[i]);
        }
        return maxi;
    }

    long long hours(vector<int> &piles, long long h) {
        long long totalh = 0;
        for (int i = 0; i < piles.size(); i++) {
            totalh += (piles[i] + h - 1) / h;  // integer ceil
        }
        return totalh;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        long long low = 1;
        long long high = findMax(piles);

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long totalh = hours(piles, mid);

            if (totalh <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return (int)low;  // final result fits in int
    }
};
