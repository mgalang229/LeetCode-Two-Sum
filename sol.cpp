class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        v.clear();
        for(int i=0; i<(int)nums.size(); ++i) {
            bool ok=0;
            for(int j=0; j<(int)nums.size(); ++j) {
                if(i==j)
                    continue;
                if(nums[i]+nums[j]==target) {
                    v.push_back(i);
                    v.push_back(j);
                    ok=1;
                    break;
                }
            }
            if(ok)
                break;
        }
        return v;
    }
};
