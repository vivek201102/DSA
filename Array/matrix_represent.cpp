#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c)     {
        vector<int> v;
        vector<vector<int>> ans;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                v.push_back(mat[i][j]);
            }
        }
        ans.push_back(v);
        return ans;
    }
};

int main()
{
    //Write your code here
    vector<int> v1 = {1,2};
    vector<int> v2 = {3,4};
    vector<vector<int>> vec;
    vec.push_back(v1);
    vec.push_back(v2);
    Solution s;
    s.matrixReshape(vec, 2, 2);
    return 0;
}