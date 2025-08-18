class Solution {
public:
    int jump(vector<int>& nums) {
        int maxi = 0, cur = 0,jumps = 0;
        for(int i=0;i<nums.size() - 1;i++)
        {
            maxi = max(maxi,nums[i] + i);
            if(i == cur)
            {
                jumps++;
                cur = maxi;
            }
        }
        return jumps;
    }
};