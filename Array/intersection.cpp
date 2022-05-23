#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int i=0, j=0, pre = -1;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        vector<int> ans;
        
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i] == nums2[j])
            {
               
                ans.push_back(nums1[i]);
                pre = nums1[i];
                i++;
                j++;
            }
            
            else if(nums1[i] < nums2[j])
                i++;
            else
                j++;
        }
        return ans;
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
    int m;
    cout<<"Enter the number of elemets"<<endl;
    cin >> m;
    vector<int> nums1;
    cout<<"Enter the values of array sparated with the space"<<endl;
    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        nums1.push_back(x);
    }

    Solution s;
    vector<int> v =s.intersect(nums, nums1);
    cout<<"[";
    int i =0;
    for(i=0; i<v.size()-1; i++)
    {
        cout<<v[i]<<",";
    }
    cout<<v[i]<<"]"<<endl;
    
    return 0;
}