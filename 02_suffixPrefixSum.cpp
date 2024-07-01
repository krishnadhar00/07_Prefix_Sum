// Check if we can partition the array into two subarrays with equla sum. more formally, check that the prefix sum of a part of the array is equal to the suffix sum of the rest of the array.
// Check whether there exits an array who sub arrays sum is equal or not.

// This is not an optimized approach it taek O(n^2) Time complexity.
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int sum=0;
    int count=0;
    int index=-1;
    for(int i=0;i<n;i++)
    {
        sum=sum+v[i];
        for(int j=i+1;j<n;j++)
        {
            count = count+v[j];
            
        }
        if(sum==count)
            {
                index=1;
                break;
            }
        count=0;
    }
    if(index==1)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
} 
*/

// Now this approach is good and it takes less time complexity.

#include<iostream>
#include<vector>
using namespace std;

bool checkPrefixSuffixSum(vector<int>&v)
{
    int totalSum = 0;
    for(int i=0;i<v.size();i++)
    {
        totalSum = totalSum+v[i];
    }
    int prefixSum = 0;
    for(int i=0;i<v.size();i++)
    {
        prefixSum+=v[i];
        int suffixSum = totalSum - prefixSum;
        if(suffixSum == prefixSum)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int size;
    cin>>size;
    vector<int>v(size);
    for(int i=0;i<size;i++)
    {
        cin>>v[i];
    }
    cout<<checkPrefixSuffixSum(v)<<" ";
}