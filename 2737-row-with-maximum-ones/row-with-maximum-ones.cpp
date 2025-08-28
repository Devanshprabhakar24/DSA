class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int max_cnt=-1;
        int index=-1;
        for(int i=0;i<n;i++){
            int cntrow=0;
            for(int j=0;j<m;j++){
                cntrow+=mat[i][j];
            }
            if(cntrow>max_cnt){
                max_cnt=cntrow;
                index=i;
            }
        }
        return {index,max_cnt};
        
    }
};