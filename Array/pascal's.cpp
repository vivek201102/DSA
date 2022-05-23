#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);
        for(int i=0; i<numRows; i++)
        {
            res[i].resize(i+1);
            for(int j=0; j<=i; j++)
            {
                if(j==0 or j==i)
                {
                    res[i][j] = 1;
                }
                else{
                    res[i][j] = res[i-1][j] + res[i-1][j-1];
                }
            }
        }
        return res;
    }
};



int main()
{
    //Write your code here
    int n;
    cout<<"Enter the value of n\n";
    cin >> n;
    Solution s;
    vector<vector<int>> res = s.generate(n);
    for(int i=0; i<res.size(); i++)
    {
        cout<<"[";
        for(int j=0; j<res[i].size(); j++)
        {
            cout<<res[i][j]<<",";
        }
        cout<<"]"
    }
    return 0;
}