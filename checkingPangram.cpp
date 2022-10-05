#include<iostream>
#include<stdbool.h>
using namespace std;

bool checkPangram(char ar[], int size)
{
    bool mark[26];

    for(int i = 0; i < 26; i++)
    {
        mark[i] = false;
    }

    for(int i = 0; i < size; i++) {
        if(ar[i] >= 'A' && ar[i] <= 'Z') mark[ar[i] - 'A'] = true;
        else if(ar[i] >= 'a' && ar[i] <= 'z') mark[ar[i] - 'a'] = true;
        //else continue;
    }

    for(int i = 0; i < 26; i++) if (mark[i] == false) return false;

    return true;
}



int main()
{
    char arr[50] = "the quick brown fox jumps over the  dog";
    int i = 0;
    while(arr[i] != '\0')
    {
        //cout<<arr[i];
        i++;
    }
    if(checkPangram(arr, 50) == true)
    cout<<"sentance is a pangram";
    else 
    cout<<"sentance is not a pangram";

    //int i = 0;
    //while(arr[i] != '\0')
    //{
      //  cin>>
       // cout<<arr[i]<<endl;
        //i++;
    //}

    return 0;
}

// time complexity for this algorithm is O(n)
// space complexity for this algorithm is O(n)