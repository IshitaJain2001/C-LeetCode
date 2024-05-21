#include <iostream>
using namespace std;
#include <vector>

                    // QUESTION -1

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.


// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//       int n= nums.size();
//       for(int i=0; i<n-1;i++){
//         for(int j=i+1; j<n;j++) {
//             if(nums[i]+nums[j]==target){
             
//             return {i,j};
//             }
//         }
//       }
//         return {};
             

//     }
// };


                                             // QUESTION -2

// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

// Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

// Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
// Return k

    int removeDuplicates(vector<int>& nums) {
      int j=1;
      int n = nums.size();

      for(int i = 1; i<n; i++){
        if(nums[i]!= nums[i-1]){
        nums[j] = nums[i];
        j++;
      }
    }

      return j;
      
}

int main() {
    
}