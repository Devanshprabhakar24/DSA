class Solution {
public:

bool possible(vector<int > &bloomDay,int day,int m,int k){
    
    int cnt=0;
    int noOfB=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=day) cnt++;
    
    else{
        noOfB+=(cnt/k);
        cnt=0;
    }}
    noOfB+=(cnt/k);
    return noOfB>=m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val=m*1ll*k*1ll;
        if(val>bloomDay.size()) return -1;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<bloomDay.size();i++){
            mini=min(bloomDay[i],mini);
            maxi=max(bloomDay[i],maxi);

        }
        int low =mini;
        int high=maxi;
        int ans=-1;
        

        while(low<=high){
            int  mid=low+(high-low)/2;
            if(possible(bloomDay,mid,m,k)){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;


        }
        return ans;      
    }
};