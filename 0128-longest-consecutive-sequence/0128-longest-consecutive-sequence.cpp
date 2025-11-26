class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        if(nums.empty()) return 0;
        int longest=0;
        for(int n : s)
        {
            if(s.find(n-1) == s.end())
            {
                int current=n;
                int length=1;

                while(s.find(current+1) != s.end())
                {
                    current++;
                    length++;
                }
                longest=max(longest,length);
            }
        }
        return longest;
    }
};