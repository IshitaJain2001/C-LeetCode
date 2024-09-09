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

// vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         vector <int> result;
//         for(int i=0; i<nums1.size();i++){
//             for(int j=0; j<nums2.size();j++) {
//                 if(nums1[i]==nums2[j]){
//                     if((find(result.begin(), result.end(), nums1[i]) != result.end())){
//                         continue;
//                     }
//                     else{
//                         result.push_back(nums1[i]);
//                     }
//                 }
//             }
//         }
//         return result;
//     }


                                           // QUESTION 8

// There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// You must write an algorithm with O(log n) runtime complexity.


//     int search(vector<int>& nums, int target) {
//         int pivot=-1;
//      for(int i=0; i<nums.size()-1;i++) {
//         if(nums[i]>nums[i+1]) {
//             pivot= i+1;
//             break;
//         }
//      }
//      int start=0;
//      int end=0;
//      long long mid=0;
//      if(pivot == -1 || (nums[0]<=target && target<=nums[pivot-1]) ){
//      start= 0;
//          end= (pivot == -1)?nums.size()-1 : pivot-1;
//             mid= start+(end-start)/2;
//     }
//      else{
//     start= pivot;
//          end= nums.size()-1;
//             mid= start+(end-start)/2;
//      }
  
//     while(start<=end){

//         if(nums[mid]==target){
//             return mid;
//         }
//         else if(nums[mid]>target) {
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//       mid= start+(end-start)/2;
//     }
//     return -1;
//     }

                                           // QUESTION 9

// At a lemonade stand, each lemonade costs $5. Customers are standing in a queue to buy from you and order one at a time (in the order specified by bills). Each customer will only buy one lemonade and pay with either a $5, $10, or $20 bill. You must provide the correct change to each customer so that the net transaction is that the customer pays $5.

// Note that you do not have any change in hand at first.

// Given an integer array bills where bills[i] is the bill the ith customer pays, return true if you can provide every customer with the correct change, or false otherwise.

//      bool lemonadeChange(vector<int>& bills) {
//         int fives=0;
//         int tens=0;
//         bool ans=true;
//       for(int i=0;i<bills.size();i++)  {
// if(bills[i]==5){
//         fives += 1;
//       }
//       else if(bills[i]==10){
//         if(fives>0) {
//             fives = fives-1;
//             tens= tens+1;
//          }
//         else{
//             ans= false;
//             break;
//         }}
//       else{
//         if(tens>0 &&fives>0 ) {
//          tens= tens-1;
//          fives= fives-1;
//       }
//         else if(fives>=3) {
//             fives= fives-3;
//        }
//         else{
//             ans= false;
//         }
//        }
//      }
//       return ans;
//     }  


// question 10

// ques-: Last occurence of an element in an array

// int lastoccurence(int arr[], int n,int tar){
//   int lastindex=-1;
//   for(int i=0; i<n;i++){
//     if(arr[i]==tar){
//       lastindex= i;
//     }
    
//   }
//   return lastindex;
// }

// question 11

// ques: first occurence of an element in an array

// int firstoccurence(int arr[], int n,int tar){
//   int firstindex=-1;
//   for(int i=0; i<n;i++){
//     if(arr[i]==tar){
//       firstindex= i;
//       break;
//     }
    
//   }
//   return firstindex;
// }

// question 12

// ques-: count the no of ocuurences of an element in a sorted array using BS

// int firstOccurence(int arr[], int n,int tar){
//   int start=0;
//   int end= n-1;
//   int ans=-1;
//    while(start<=end){
// int mid= (start+end)/2;
// if(tar>arr[mid]){
//   start= mid+1;
// }
// if(tar<arr[mid]){
//   end= mid-1;
// }
// if(tar==arr[mid]){
//  ans= mid;
//  end= mid-1;
// }
// }
// return ans;
// }

// int lastOccurence(int arr[],int n,int tar){
//     int start=0;
//   int end= n-1;
//   int ans=-1;
//    while(start<=end){
// int mid= (start+end)/2;
// if(tar>arr[mid]){
//   start= mid+1;
// }
// if(tar<arr[mid]){
//   end= mid-1;
// }
// if(tar==arr[mid]){
//  ans= mid;
// start= mid+1;
// }
// }
// return ans;
// }

// int totalOccurences(int arr[],int n,int tar){
//   int val2= lastOccurence(arr,n,tar);
//   int val1= firstOccurence(arr,n,tar);
//   return val2-val1+1;
// }

//question 13

// ques-: binary to octal

int convert(int num){

int ans=0;
int pow=1;
while(num>0){
  int rem= num%8;
  ans += rem* pow;
  pow =pow*10;
  num= num/8;
}
return ans;
}
int main() {

 





return 0;
}