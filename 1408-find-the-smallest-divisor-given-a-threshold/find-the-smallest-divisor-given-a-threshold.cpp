class Solution {
public:
int  check(vector<int> &nums,int mid){
    int ans=0;
    for(int i=0;i<nums.size();i++){
       ans+= (nums[i]+mid-1)/mid;
       }

    return ans;

}
    int smallestDivisor(vector<int>& nums, int threshold) {

        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        
        int low=1;
        int high=maxi;
        int ans=high;

        while(low<=high){
            int mid=low+(high-low)/2;
         if(check(nums,mid)<=threshold){
            ans=mid;
            high=mid-1;}

         else{
            low=mid+1;
         }
        }
        return ans;
    }
};