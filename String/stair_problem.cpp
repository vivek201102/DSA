#include<bits/stdc++.h>

using namespace std;


/*

    @LEETCODE PROBLEM
    PROBLEM : STAIR PERMUTATION (YOU CAN CLIMB 1 OR 2 STAIRS AT TIME)
    TIME COMPLEXITY :  O(n)
    SPACE COMPLEXITY : O(n)

*/

class Solution{
    public:

    int fib(int n)
    {
        int fib[n+2];
        fib[0] = 0;
        fib[1] = 1;
        for(int i=2; i<=n; i++)
        {
            fib[i] = fib[i-1] + fib[i-2];
        }
        return fib[n];
    }

    int permutations_stairs(int n)
    {
        return fib(n+1);
    }
};



// For finding the permutation for climbing stairs by one or two step we need to find fibonacci number of next number
// Ex. For n=r we need to fine fibonacci(r+1)

int main()
{
    //Write your code here
    Solution s;
    cout<<s.permutations_stairs(5)<<endl;
    return 0;
}