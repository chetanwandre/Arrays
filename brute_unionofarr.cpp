
// Problem statement
// You are given an array ‘arr’ containing ‘n’ integers. You are also given an integer ‘num’, and your task is to find whether ‘num’ is present in the array or not.



// If ‘num’ is present in the array, return the 0-based index of the first occurrence of ‘num’. Else, return -1.



// Example:
// Input: ‘n’ = 5, ‘num’ = 4 
// 'arr' =  [6,7,8,4,1] 

// Output: 3

// Explanation:
// 4 is present at the 3rd index.


#include<bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here

    //brute force approach
    int n1 = a.size();
    int n2 = b.size();

    set<int> st;   //set only contains unique elements and it avoids taking duplicates

    //insert elements in 1st arr
    for(int i = 0; i< n1; i++) {
        st.insert(a[i]);
    }

    //insert unique elements in 2nd arr
    for(int i = 0; i< n2; i++) {
        st.insert(b[i]);
    }

    //take an extra arr to store the elements in set and we have to return the answer as an array
    vector<int>temp;
    for(auto it: st) {
        temp.push_back(it);
    }
    return temp;
}

