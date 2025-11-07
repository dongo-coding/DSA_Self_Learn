class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        unordered_map<char,int>mp {
            {'I',1}, {'V',5}, {'X',10}, {'L',50}
            , {'C',100}, {'D',500}, {'M',1000}
        };
        for(int i=0;i<s.size();i++){
            if (mp[s[i]] < mp[s[i+1]]){
                ans-=mp[s[i]];
            }
            else {
                ans+=mp[s[i]];
            }

        }
        return ans;

        

    }
}; #Roman_to_Integer

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int ans=strs[0].length();
        for(int i=1;i<strs.size();i++){
            int j=0;
            while (j<strs[i].length() && strs[i][j] == strs[0][j])j++;
            ans = min(ans,j);
            
        }
        return strs[0].substr(0,ans);
    }
}; #Longest_Common_Prefix
