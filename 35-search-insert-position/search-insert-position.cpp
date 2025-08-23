class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int r=n;

        while(l<r){
            int mid=l+(r-l)/2;


            if(target>nums[mid]){
                l=mid+1;

            }
            else{
                r=mid;
            }


        }
        return l;
        
    }
};