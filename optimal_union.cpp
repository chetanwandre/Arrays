
// Problem statement
// Given two sorted arrays, ‘a’ and ‘b’, of size ‘n’ and ‘m’, respectively, return the union of the arrays.



// The union of two sorted arrays can be defined as an array consisting of the common and the distinct elements of the two arrays. The final array should be sorted in ascending order.



// Note: 'a' and 'b' may contain duplicate elements, but the union array must contain unique elements.



// Example:
// Input: ‘n’ = 5 ‘m’ = 3
// ‘a’ = [1, 2, 3, 4, 6]
// ‘b’ = [2, 3, 5]

// Output: [1, 2, 3, 4, 5, 6]

// Explanation: Common elements in ‘a’ and ‘b’ are: [2, 3]
// Distinct elements in ‘a’ are: [1, 4, 6]
// Distinct elements in ‘b’ are: [5]
// Union of ‘a’ and ‘b’ is: [1, 2, 3, 4, 5, 6]

#include<bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here

    //most optimal solution

    vector<int> unionArr;
    int n1 = a.size();
    int n2 = b.size();
    int i = 0; 
    int j = 0;


  //MAIN LOGIC
  
    while(i < n1 && j < n2) {
        if(a[i] <= b[j]) {
            if(unionArr.size() == 0 || unionArr.back() != a[i]) {      //if initially the unionarr is empty or the last or previous entered element is not same as the current one , then only insert the current element
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else {
            if(unionArr.size() == 0 || unionArr.back() != b[j]) {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }

    //if second array is exhausted by i , then
    while(i < n1) {
        // if(a[i] <= b[j]) {
            if(unionArr.size() == 0 || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            
            // i++;
        }
        i++;
    }

    //if first array is exhausted by iterator j, then
    while(j < n2) {
        // if(a[i] >= b[j]) {
            if(unionArr.size() == 0 || unionArr.back() != b[j]) {
                unionArr.push_back(b[j]);
            
            // j++;
        }
        j++;
    }

    return unionArr;
}

