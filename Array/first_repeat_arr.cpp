#include <bits/stdc++.h>

using namespace std;


int find_min_repeat_element(int arr[], int n)
{
    int m = *max_element(arr, arr + n);
    int index_arr[m+1];
    for(int i=0; i<(m+1); i++)
    {
        index_arr[i] = -1;
    }
    int min_ind = INT_MAX;

    for(int i=0; i<n; i++)
    {
        if(index_arr[arr[i]] == -1)
        {
            index_arr[arr[i]] = i;
        }
        
        else
        {
            if(min_ind > i)
            {
                min_ind = index_arr[arr[i]];
            }
        }
    }
    if(min_ind == INT_MAX)
        return -1;
    else
        return min_ind;
}


int main()
{
    int n;
    cout<<"Enter the number of elemets"<<endl;
    cin >> n;
    int arr[n];
    cout<<"Enter the values of array sparated with the space"<<endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int x = find_min_repeat_element(arr, n);
    if(x != -1)
        cout<<"Index of element "<<x<<" and element is "<<arr[x]<<endl;
    else
        cout<<"No element is repeated"<<endl;
    return 0;
}