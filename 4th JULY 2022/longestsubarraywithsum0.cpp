#include <bits/stdc++.h> 

using namespace std;

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
    unordered_map<int,int> map;
    
    int maxi=0;
    int sum =0;
    
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
        
        if(sum==0)
        {
            maxi=i+1;
        }
        else{
            if(map.find(sum)!=map.end())
            {
                maxi=max(maxi,i-map[sum]);
            }else
            {
                map[sum]=i;
            }
        }
    }
    
    return maxi;

}