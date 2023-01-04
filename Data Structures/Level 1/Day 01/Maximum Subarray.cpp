class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maximum = nums[0];
        for(auto i:nums){
            sum+=i;
            maximum = max(maximum,sum);
            if(sum<0){sum=0;}
        }
        return maximum;
    }
};