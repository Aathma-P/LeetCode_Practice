class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size())
        return false;

        vector<int> mapS(256, -1);
        vector<int> mapT(256, -1);
        for(int i = 0; i < s.size(); i++)
        {
            if(mapS[s[i]] == -1 && mapT[t[i]] == -1)
            {
                mapS[s[i]] = t[i];
                mapT[t[i]] = s[i];
            }
            else if(mapS[s[i]] != t[i] || mapT[t[i]] != s[i])
            {
                return false;
            }
        }
        return true;
    }
};