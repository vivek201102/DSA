#include<bits/stdc++.h>

using namespace std;

void print_vector(vector<int> v1)
{
    for(int i=0; i<v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}

bool compair_vector(vector<int> v1, vector<int> v2)
{
    if(v1.size() != v2.size())
        return false;
    for(int i=0; i<v1.size(); i++)
    {
        if(v1[i] != v2[i])
            return false;
    }
    return true; 
}

int find_element()

int main()
{
    //Write your code here
    vector<int> v1;
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);

    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);


    if(v == v1)
        cout<<"True\n";
    else
        cout<<"False\n";

    print_vector(v1);

    vector<int> v2;
    v2.resize(4);
    cout<<v2.size();

    

    return 0;
}