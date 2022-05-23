#include<bits/stdc++.h>

/*

// @LEETCODE
// PROBLEM : CHECK FOR GIVEN TWO STRING IS ANAGRAM OR NOT
// TIME COMPLEXITY : O(N log N)
// SPACE COMPLEXITY : O(N)

*/


using namespace std;

class Solution {
    public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] != t[i])
                return false;
        }
        return true;
    }


};


/*

// @LEETCODE
// PROBLEM : CHECK FOR GIVEN TWO STRING IS ANAGRAM OR NOT
// TIME COMPLEXITY : O(N)
// SPACE COMPLEXITY : O(N)

*/


class Best_Sollution{
    public:
        bool isAnagram(string s, string t)
        {
            if(s.length() != t.length())
                return false;
            int count[26] = {0};
            for(int i=0; i<s.length(); i++)
            {
                count[s[i] - 'a']++;
                count[s[i] - 'a']--;
            }

            for (int i: count)
            {
                if(count[i] != 0)
                    return false;
            }
            return true;
        }
};


int main()
{
    //Write your code here
    //Static
    string s = "anagram";
    string t = "nagaram";

    //Dynamic
    string st1, st2;
    cout<<"Enter the first string:\n";
    cin>>st1;
    cout<<"Enter the first string:\n";
    cin>>st2;
    Solution s1;
    Best_Sollution s2;
    bool a = s1.isAnagram(s,t);
    bool b = s2.isAnagram(st1,st2);
    cout<<a<<" "<<b<<endl;    
    return 0;
}