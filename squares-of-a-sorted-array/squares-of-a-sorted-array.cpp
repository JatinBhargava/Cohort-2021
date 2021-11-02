class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,0);
        for(int i=0;i<nums.size();i++)
        {
          ans[i] = nums[i]*nums[i];  
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};