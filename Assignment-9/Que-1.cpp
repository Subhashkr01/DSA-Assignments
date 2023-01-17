//leetcode problem (Two sum)

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                ans.push_back(m[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            m[nums[i]]=i;
        }
        return ans;
    }
};

int main() {
    vector<int> nums={2,7,11,15};
    int target=9;
    Solution s;
    vector<int> ans=s.twoSum(nums,target);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}