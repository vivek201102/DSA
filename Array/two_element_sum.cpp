#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int x = nums.size();
        vector<int> vt;
        for(int i=0; i<x; i++)
        {
            if(nums[i] + nums[i+1] == target)
            {
                vt.push_back(i);
                vt.push_back(i+1);
                break;
            }
        }
        return vt;
    }
};

int main()
{
    //Write your code here
    vector<int> nums = {1,2,5,6,7};
    vector<int> res;
    
    Solution s;
    res = s.twoSum(nums, 7);
    cout<<res[0]<<" "<<res[1]<<endl;
    return 0;
}