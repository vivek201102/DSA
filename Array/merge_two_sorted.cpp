#include<bits/stdc++.h>

using namespace std;



class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> new_nums1 = nums1;
        vector<int> new_nums2 = nums2;
        int ind1 =0, ind2 =0, ind=0;
        while(ind1 < m && ind2 < n)
        {
            if(new_nums1[ind1] < new_nums2[ind2])
            {
                nums1[ind] = new_nums1[ind1];
                ind1++;
            }
            else{
                nums1[ind] = new_nums2[ind2];
                ind2++;
            }
            ind++;
        }
        
        while(ind1 < m)
        {
            nums1[ind] = new_nums1[ind1];
            ind1++;
            ind++;
        }
        while(ind2 < n)
        {
            nums1[ind] = new_nums2[ind2];
            ind2++;
            ind++;
        }
    }
};


int main()
{
    //Write your code here
    int m, n;
    cin >> m >> n;
    vector<int> nums1;
    vector<int> nums2;
    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        nums1.push_back(x);
    }
   for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        nums1.push_back(0);
        nums2.push_back(x);
    }

    Solution s;
    s.merge(nums1, m, nums2, n);
    for(auto lt = nums1.begin(); lt != nums1.end(); lt++)
    {
        cout<<*lt<<" ";
    }
    return 0;
}