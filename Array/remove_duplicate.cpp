#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        int n = nums.size();
        int ans = 0;
        for(vector<int>::iterator lt=nums.begin(); lt!=nums.end(); lt++)
        {
               
            if(s.count(*lt) > 0)
            {
                nums.erase(lt);
                ans++;
            }
            else{
                s.insert(*lt);
            }
        }
        return n-ans;
    }
};

void print_vector(vector<int> &v)
{
    for(auto lt=v.begin(); lt!=v.end(); lt++)
    {
        cout<<*lt<<" ";
    }
    cout<<endl;
}

int main()
{
    //Write your code here
    vector<int> vt = {0,0,1,1,1,2,2,3,3,4};
    Solution s;
    s.removeDuplicates(vt);
    print_vector(vt);
    return 0;
}