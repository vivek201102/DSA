#include<bits/stdc++.h>

using namespace std;

int main()
{
    //Write your code here
    

    //Length of string and anssi code of string
    
    char c1[] = "myString";
    int i;
    for(i=0; c1[i]!='\0'; i++)
    {
        cout<<c1[i]+32<<" ";
    }

    cout<<"\nLength of String is "<<i<<"\n";



    //Conver string to Upper case


    char c2[] = "Let check if CaPital LetTer";
    for(int i=0; c2[i]!='\0'; i++)
    {
        if(c2[i] >= 'a' && c2[i] <= 'z')
            c2[i] -= 32;
        
    }

    cout<<"\n";
    for(int i=0; c2[i]!='\0'; i++)
    {
        cout<<c2[i];
    }
    cout<<"\n";


    //Conver string to Lower case


    char c3[] = "LET ChEck If CaPital LetTer";
    for(int i=0; c3[i]!='\0'; i++)
    {
        
        if(c3[i] >= 'A' && c3[i] <= 'Z')
            c3[i] += 32;
    }

     cout<<"\n";
    for(int i=0; c3[i]!='\0'; i++)
    {
        cout<<c3[i];
    }
    cout<<"\n";



    //Check for vowels


    char c4[] = "How are you?";
    int count = 0;
    for(int i=0; c4[i]!='\0'; i++)
    {
        if(c4[i] == 'a' || c4[i] == 'e' || c4[i] == 'i' || c4[i] == 'o' || c4[i] == 'u' || c4[i] == 'A' || c4[i] == 'E' || c4[i] == 'I' || c4[i] == 'O' || c4[i] == 'U')
            count++;
    }

    cout<<endl<<count<<endl;


    //check for valid string



    int count1 = 0;
    // char c5[] = "Valid String";


    char c5[] = "Notvalidstring ^%";
    for(int i=0; c5[i] !='\0'; i++)
    {
        if((c5[i] >= 'a' && c5[i] <= 'z') || (c5[i] >= 'A' && c5[i] <= 'Z') || (c5[i] >= '0' && c5[i] <= '9') || (c5[i] == ' '))
            continue;
        else
            count1++;
    }
    if(count1 == 0)
        cout<<"Valid String";
    else
        cout<<"Not Valid String";

    cout<<endl;


    //check duplicate


    char c7[] = "immediate";
    set<char> s;
    count = 0;
    for(int i=0; c7[i]!='\0'; i++)
    {
        if(s.count(c7[i]) > 0)
        {
            count++;
        }
        else
            s.insert(c7[i]);
    }

    if(count > 0)
    {
        cout<<"Duplicate found: "<<count<<endl;
    }

    string st = "abcba";
    cout<<st[0]<<st.length()<<endl;

    

    string st1 = "abcbda";
    count = 0;
    for(int i=0, j=st1.length()-1; i<st1.length()/2, j>=st1.length()/2; i++, j--)
    {
        if(st1[i] == st1[j])
            continue;
        else
        {
            count++;
            break;
        }
    }

    if(count == 0)
        cout<<"palindrom"<<endl;
    else
        cout<<"Not palindrom"<<endl;

    

    //Anagram strings
    string s1, s2;
    s1 = "medical";
    s2 = "decimal";
    set<char> s3;
    set<char> s4;
    for(int i=0; i<s1.length(); i++)
    {
        s3.insert(s1[i]);
    }

    for(int i=0; i<s2.length(); i++)
    {
        s4.insert(s2[i]);
    }
    if(s3 == s4)
        cout<<"Anagram"<<endl;
    else
        cout<<"Not Anagram"<<endl;
    return 0;
}