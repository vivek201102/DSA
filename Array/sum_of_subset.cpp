#include<bits/stdc++.h>

using namespace std;




int main()
{
    //Write your code here
    int n, total_sum;
    cout << "Enter the number of elements"<<endl;
    cin >> n >> total_sum;
    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    // int n = 5, total_sum = 12;
    // int arr[5] = {1,2,4,7,5};

    int i=0, j=0, sp=-1, ep=-1, sum=0;

    while(j<n && sum+arr[j]<=total_sum)
    {
        sum+=arr[j];
        j++;
    }

    if(sum == total_sum)
    {
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    
    while(j<n)
    {
        sum += arr[j];
        while(sum > total_sum)
        {
            sum -= arr[i];
            i++;
        }

        if(sum == total_sum)
        {
            sp = i+1;
            ep = j+1;
            break;
        }

        j++;
    }

    if(sp == -1)
    {
        cout << "No sollution exist" <<endl;
        return 0;
    }
    cout<<sp<<" "<<ep<<endl;

    return 0;
}