class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> a;
        for(auto i:nums){
            a.insert(i);
        }
        return(nums.size()!=a.size());
    }
};