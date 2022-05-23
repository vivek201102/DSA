#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        set<int> st;
        for(auto it=nums.begin(); it!=nums.end(); it++)
        {
            if(st.count(*it) > 0)
                return true;
            st.insert(*it);
        }
        return false;
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
    // vector<int> nums = {1,2,2,5,4};
    Solution s;
    bool s2 = false; 
    s2 = s.containsDuplicate(nums);
    (s2!=0)?cout<<"Duplicate Number":cout<<"No duplicate number";
    return 0;
}