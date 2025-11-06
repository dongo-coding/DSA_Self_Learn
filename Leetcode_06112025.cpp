class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int complement = target - nums[i];
            if (mp.find(complement) != mp.end()){
                return {mp[complement],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};  #Two_Sum

class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        long long res=0;
        while(temp){
            int rem=temp%10;
            res=res*10+rem;
            temp/=10;
        }
        if (x==0) return true;
        else if (x==res && x>0) return true;
        else return false;
    }
};  #Palindromme_number
