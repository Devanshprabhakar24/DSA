class Solution {
public:

    int lowerBound(vector<int > & nums,int n, int target){
        int l=0;
        int r=n-1;
        int ans=n;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]>=target){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }

        }
        return ans;
    }
    int upperBound(vector<int > & nums,int n, int target){
        int l=0;
        int r=n-1;
        int ans=n;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]>target){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }

        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int  n=nums.size();
        int lb=lowerBound(nums,n,target);
        if(lb==n || nums[lb]!=target){
            return {-1,-1};
        }
        return {lb,upperBound(nums,n,target)-1};
        }
    
};