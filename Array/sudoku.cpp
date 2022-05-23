#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<char> s[9];
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(i!=j)
                {
                    if(s[i].count(board[i][j]) > 0)
                    {
                        return false;
                    }
                    if(board[i][j] != ' ')
                        s[i].insert(board[i][j]);
                }
            }
        }
        
        set<char> s1[9];
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(i!=j)
                {
                    if(s1[i].count(board[j][i]) > 0)
                    {
                        return false;
                    }
                    if(board[j][i] != ' ')
                        s1[i].insert(board[j][i]);
                }
            }
        }
        
        
        
       
        return true;
    }
};


int main()
{
    //Write your code here
    // vector<char> v1 = {"8,"3"," "," ","7"," "," "," "," "};
    // vector<char> v2 = {"6"," "," ","1","9","5"," "," "," "};
    // vector<char> v3 = {" ","9","8"," "," "," "," ","6"," "};
    // vector<char> v4 = {"8"," "," "," ","6"," "," "," ","3"};
    // vector<char> v5 = {"4"," "," ","8"," ","3"," "," ","1"};
    // vector<char> v6 = {"7"," "," "," ","2"," "," "," ","6"};
    // vector<char> v7 = {" ","6"," "," "," "," ","2","8"," "};
    // vector<char> v8 = {" "," "," ","4","1","9"," "," ","5"};
    // vector<char> v9 = {" "," "," "," ","8"," "," ","7","9"};
    vector<vector<char>> sudo  {{"8","3"," "," ","7"," "," "," "," "},["6"," "," ","1","9","5"," "," "," "],[" ","9","8"," "," "," "," ","6"," "],["8"," "," "," ","6"," "," "," ","3"],["4"," "," ","8"," ","3"," "," ","1"],["7"," "," "," ","2"," "," "," ","6"],[" ","6"," "," "," "," ","2","8"," "],[" "," "," ","4","1","9"," "," ","5"]
,[" "," "," "," ","8"," "," ","7","9"]};
    // sudo push_back(v1);
    // sudo push_back(v2);
    // sudo push_back(v3);
    // sudo push_back(v4);
    // sudo push_back(v5);
    // sudo push_back(v6);
    // sudo push_back(v7);
    // sudo push_back(v8);
    // sudo push_back(v9);
    // vector<char> v[9];
    // for(int i=0; i<9; i++)
    // {
    //     for(int j=0; j<9; j++)
    //     {
    //         int x;
    //         cin >> x;
    //         v[i] push_back(x);
    //     }
    //     sudo push_back(v[i]);
    // }
    Solution s;
    s.isValidSudoku(sudo);
    return 0;
}

