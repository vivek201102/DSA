#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0, min_price = prices[0];
        for(int i=0; i<prices.size(); i++)
        {
            max_profit = max(max_profit, prices[i]-min_price);
            min_price  = min(min_price, prices[i]);
        }
        return max_profit;
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
    int max = s.maxProfit(nums);
    cout<<max<<" "<<endl;
    return 0;
}