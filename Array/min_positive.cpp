#include<bits/stdc++.h>

using namespace std;

int check_min_num(int arr[], int n)
{
    int m = * max_element(arr, arr+n);
    int check[m+1]={0};
    for(int i=0; i<n; i++)
    {
        if(arr[i] > -1)
        {
            check[arr[i]] = 1;
        }
    }

    for(int i=0; i<m; i++)
    {
        if(check[i] == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    //Write your code here
    int n;
    cout<<"Enter the number of elemets"<<endl;
    cin >> n;
    int arr[n];
    cout<<"Enter the values of array sparated with the space"<<endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int x = check_min_num(arr, n);
    if(x != -1)
    {
        cout << x <<endl;
    }
    else{
        cout<<"All number are present"<<endl;
    }
    return 0;
}