#include<iostream>
#include<bits/stdc++.h>

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int start = 0;
        int end = row*col - 1;
        int mid = (start + end )/2;

        while(start<=end){
            int element = matrix[mid/col][mid%col];

            if(element == target){
                return 1;
            }
            else if(target < element){
                end = mid -1;
            }
            else{
                start = mid + 1;
            }
            mid = (start + end)/2;
        }
        return 0;
    }
};