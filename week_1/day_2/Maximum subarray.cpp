class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxi= INT_MIN;
        int a =0;
        for(int i=0;i<n;i++)
        {
             a += nums[i];
             maxi = max(maxi,a);
            if(a<0){
                a=0;
            }
           
        }
        return maxi;
        
    }
};
