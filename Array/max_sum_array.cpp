#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
    int maxSubArray(vector<int>& nums) {
        //O(n^2) using cumalative sum
    int currsum[n+1];
    currsum[0] = 0;

    for(int i=1;i<=n;i++)
    {
        currsum[i] = currsum[i-1] + arr[i-1];    
    }

    int maxSum = INT_MIN;

    for(int i=1;i<=n;i++)
    {
        int sum = 0;
        for(int j=0;j<i;j++)
        {
            sum = currsum[i] - currsum[j];
            maxSum = max(sum, maxSum);
        }

    }

    // cout<<maxSum<<endl;

    //O(n^3) bruteforce
    // int maxsum = 0;
    // int sum = 0;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i;j<n;j++)
    //     {
    //         sum=0;
    //         for(int k=i;k<=j;k++)
    //         {
    //             sum+=a[k];
    //             // cout<<a[k]<<" ";
    //         }
    //         maxsum = max(maxsum,sum);
    //         // cout<<endl;
    //     }
    // }
    // cout<<maxsum<<endl;

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
    return 0;
}