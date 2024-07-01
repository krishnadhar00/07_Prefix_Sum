// Given an array of integer of size n. Answer q queries where you need to print the sum of values in a given range of indices from l to r.(both included)
// Note : The value of l and r follows the 1-based indexing.
/*  Like example:
arr = [4,5,1,3,2] l=2 and r=4 so we want the sum of the values ranging between them. so 5+1+3 = 9 bcoz l and r are inclued. for some q queries. 
One way to do this is that for alll the query inside while loop run the for loop from l to r and print the sum but it taek more time complexity so another way to do this is by prefix sum. it takes less time complexity.
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n+1,0); // for 1 based indexing the take the size of vector as n+1 and initialize with 0.
    for(int i=1;i<=n;i++) // for 1 based start taking input from the index 1.
    {
        cin>>v[i];
    }
    for(int i=1;i<=n;i++)
    {
        v[i] = v[i-1]+v[i];  // calculating the prefix without new array.
    }
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        int ans = v[r]-v[l-1];
        cout<<ans<<endl;
    }
}