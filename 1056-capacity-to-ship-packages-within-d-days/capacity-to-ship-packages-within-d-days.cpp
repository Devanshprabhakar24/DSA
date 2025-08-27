class Solution {
public:

    int findDays(vector<int > & weights,int cap){
        int days=1;
        int load=0;

        for(int i=0;i<weights.size();i++){
            if((weights[i]+load)>cap){
                days++;
                load=0;
            }
            load+=weights[i];
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            maxi=max(maxi,weights[i]);
        }
        
        int low=maxi;
        int high =sum;
        while(low<=high){
            int mid=low+(high-low)/2;
            int noOfDays=findDays(weights,mid);
            if(noOfDays<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
    }
    return low;
    }
};