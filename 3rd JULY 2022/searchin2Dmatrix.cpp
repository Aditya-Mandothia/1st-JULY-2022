#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        if(matrix.size()==0)return false;
        
        int n=matrix.size();
        int m= matrix[0].size();
        
        int low=0;
        int high= ((m*n)-1);
        
        while(low<=high)
        {
            int mid=((low+ (high-low))/2);
            
            if(matrix[mid/m][mid%m]==target)
            {
                return true;
            }
            
            if(matrix[mid/m][mid%m]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        
        return false;
    }
};

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int i=0;
        int j=matrix[0].size() -1;
        
        while(i>=0 and i<matrix.size() and j>=0 and j<matrix[0].size())
        {
            if(matrix[i][j]==target)
            {
                return true;
            }
            else if(matrix[i][j]<target)
            {
                i++;
            }
            else if(matrix[i][j]>target)
            {
                j--;
            }
        }
        
        return false;
    }
};