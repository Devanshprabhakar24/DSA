class Solution {
public:
    int getSum(int a, int b) {
         string result="";

        while(b!=0){
            int temp=(a&b)<<1;
            a=a^b;
            b=temp;


        }
        return a;


        
    }
};