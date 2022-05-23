#include<bits/stdc++.h>

using namespace std;


class Array{
    public:
    int size;
    int length;

    void append(int data, int arr[]);
    void insert(int index, int data, int arr[]);
    void display(int arr[]);
    int remove(int index, int arr[]);
    int find(int data, int arr[]);
    int get(int index, int arr[]);
    void set(int index, int data, int arr[]);
    void reverse(int arr[]);
};






void Array::append(int data, int arr[])
{
    if(this->length < this->size)
    {
        arr[length] = data;
        length++;
    }
    else{
        cout<<"Error::Index is out of bound!!!"<<endl;
    }
}





int Array::remove(int index, int arr[])
{
    int x = arr[index];
    for(int i=index; i<this->length; i++)
    {
        arr[i] = arr[i+1];
    }
    length--;
    return x;
}






int Array::get(int index, int arr[])
{
    return arr[index];
}





void Array::display(int arr[])
{
    for(int i=0; i<this->length; i++)
    {
        cout<<arr[i]<<" ";
    }
}





void Array::set(int index, int data, int arr[])
{
    arr[index] = data;
}




void Array::insert(int index, int data, int arr[])
{
    for(int i=this->length; i>index; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[index] = data;
    this->length++;
}






int Array::find(int data, int arr[])
{
    for(int i=0; i<length; i++)
    {
        if(arr[i] == data)
            return i;
    }
    return -1;
}


void Array::reverse(int arr[])
{
    for(int i=0, j=this->length-1; i<this->length/2, j>=length/2 ; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main()
{
    //method for intitalization
    // int arr[100]; // Method 1
    // int *p;             //Method 2
    // p =  new int[100];  //continue
    //Runtime declare
    // int arr1[n];
    // int * q;
    // q = new int[n];
    //
    // int arr3[] = {1,2,3} // array of size 3 contains 1 2 3
    // int arr4[10]={1,2,3} // array of size 10 contains 1 2 3 0 0 0 0 0 0 0

    int n = 10;
    // cin >> n;
    Array a;
    a.size = n;
    a.length = 0;
    int arr[n];
    a.append(5,arr);
    cout<<a.length<<" \n";
    a.append(8,arr);
    cout<<a.length<<" \n";
    a.append(4,arr);
    a.append(9,arr);
    cout<<a.length<<" \n";
    a.insert(2,6,arr);
    cout<<a.length<<" \n";
    a.display(arr);
    cout<<"\n";
    a.reverse(arr);
    a.display(arr);
    return 0;
}

