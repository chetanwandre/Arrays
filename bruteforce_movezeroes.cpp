
// Given an array 'arr' of 'n' non-negative integers, your task is to move all the zeros to the end of the array while keeping the non-zero elements at the start of the array in their original order. Return the modified array.



// Example :
// Input: ‘n’ = 5, ‘arr’ = [1, 2, 0, 0, 2, 3]
// Output: [1, 2, 2, 3, 0, 0]

// Explanation: Moved all the 0’s to the end of an array, and the rest of the elements retain the order at the start.


vector<int> moveZeros(int n, vector<int> arr) {

    //brute force approach
    vector<int>temp;

    //step 1 :- put all non zero elements in initial part of array
    for(int i = 0; i< n; i++) {
        if(arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }

    //step 2 :- put all those non zero elements in temp to original arr
    int nonzero = temp.size();
    for(int i = 0; i< n; i++) {
        arr[i] = temp[i];
    }

    //step 3 :- fill all the remaining last positions with zeroes
    for(int i = nonzero; i< n; i++) {
        arr[i] = 0;
    }

    return arr;
}

// Sample input 1:
// 4
// 0 0 0 1 
// Sample output 1:
// 1 0 0 0 
// Explanation of sample input 1:
// Output: [1, 0, 0, 0]

// We move all the 0’s to the end of an array, and the rest of the elements retained the order at the start.
// Sample input 2:
// 5
// 4 0 3 2 5 
// Sample output 2:
// 4 3 2 5 0 
// Explanation of sample input 2:
// Output: [4, 3, 2, 5, 0]

// we move all the 0’s to the end of an array, and the rest of the elements retained the order at the start.
// Expected time complexity:
//  The expected time complexity is O(n).
// Constraints:
// 1 ≤ n ≤ 10^6
// 0 ≤ arr[i] ≤ 10^9

// Time limit: 1 sec

