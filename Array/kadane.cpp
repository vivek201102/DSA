#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int * maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max_end = 0, max_current = INT_MIN;
        int start_index = 0, end_index = 0;
        int i=0;
        for(auto lt = nums.begin(); lt!=nums.end(); lt++)
        {
            max_end = max_end + *lt;
            if(max_current < max_end)
            {
                max_current = max_end;
                end_index = i;
            }
            if(max_end < 0)
            {
                max_end = 0;
                start_index=i+1;
            }
            i++;
        }
        if(start_index > end_index)
        {
            start_index = end_index;
        }
        static int result[3] ={max_current, start_index, end_index};
        return result;
    }
};

int main()
{
    //Write your code here
    int n;
    cout<<"Enter the number of elemets"<<endl;
    cin >> n;
    vector<int> nums;
    cout<<"Enter the values of array sparated with the space"<<endl;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    // vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    Solution s;
    int * max_sum = s.maxSubArray(nums);
    cout<<"Maximum sum is "<<max_sum[0]<<" : ";
    int i;
    for(i=max_sum[1]; i<max_sum[2]; i++)
    {
        cout<<nums[i]<<" + ";
    }
    cout<<nums[i]<<endl;
    cout<<"Starting index: "<<max_sum[1]<<" Ending index: "<<max_sum[2]<<endl;
    return 0;
}