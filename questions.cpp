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

//     int removeDuplicates(vector<int>& nums) {
//       int j=1;
//       int n = nums.size();

//       for(int i = 1; i<n; i++){
//         if(nums[i]!= nums[i-1]){
//         nums[j] = nums[i];
//         j++;
//       }
//     }

//       return j;
      
// }

                                              // QUESTION 3

//  Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space 

//     int singleNumber(vector<int>& nums) {
//         int ans=0;
//         for(int i=0;i<nums.size();i++) {
// ans = ans ^nums[i];
//         }
//         return ans;
//     }

                                            // QUESTION 4

// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array. 

    //  int missingNumber(vector<int>& nums) {
    //  int ans=0;
    //  int n= nums.size();
    //  for(int i=0; i<n; i++) {
    //  ans += nums[i];
    //   }
    //  int expected= n*(n+1)/2;
    //  int finalans= expected-ans;
    //  return finalans;
    // };

                                            // QUESTION 5

//    Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

//   You must write an algorithm with O(log n) runtime complexity.                                         

// int searchInsert(vector<int>& nums, int target) {
       
//     int start= 0;
//   int end= nums.size() -1;
//     while(start<=end)   {
//         int mid= start+(end-start)/2;
//         if(nums[mid]==target){
//             return mid;
//              }
//         else if(nums[mid]>target) {
//             end= mid-1;
//              }
//         else {
//       start= mid+1;
//       }
//        }
// return start;
//     }

                                        // QUESTION 6

// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

// You must write an algorithm with O(log n) runtime complexity.

//    int search(vector<int>& nums, int target) {
//      int start= 0;
//      int end= nums.size() -1;
//      while(start<=end)  {
//         int mid= start+(end-start)/2;
//         if(nums[mid]==target) {
//             return mid;
//         }
//         else if(nums[mid]>target) {
//             end=mid-1;

//         }
//         else{
//             start=mid+1;
//         }
//      }
//      return -1;
//     }

                                            // QUESTION 7

//  Given two integer arrays nums1 and nums2, return an array of their 
// intersection
// . Each element in the result must be unique and you may return the result in any order. 

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> result;
        for(int i=0; i<nums1.size();i++){
            for(int j=0; j<nums2.size();j++) {
                if(nums1[i]==nums2[j]){
                    if((find(result.begin(), result.end(), nums1[i]) != result.end())){
                        continue;
                    }
                    else{
                        result.push_back(nums1[i]);
                    }
                }
            }
        }
        return result;
    }



int main() {
    
}