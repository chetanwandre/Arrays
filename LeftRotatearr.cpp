// Task :- Given an array 'arr' with 'n' elements, the task is to rotate the array to the left by 'k' steps, where 'k' is non-negative.



// Example:
// 'arr '= [1,2,3,4,5]
// 'k' = 1  rotated array = [2,3,4,5,1]
// 'k' = 2  rotated array = [3,4,5,1,2]
// 'k' = 3  rotated array = [4,5,1,2,3] and so on.


//code:- 

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void leftRotate(int arr[] , int n , int k) {
    k = k%n;
    if(k == 0) {
        return;
    }
    reverse(arr , arr + k);
    reverse(arr + k , arr + n);
    reverse(arr , arr + n);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i< n; i++) {
        cin>>arr[i];
    }

    int k;
    cin>>k;
    // k = k%n;
    
    leftRotate(arr , n , k);

    for(int i = 0; i< n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}



// PS C:\Users\User\OneDrive\Desktop\chetan\C++> cd "c:\Users\User\OneDrive\Desktop\chetan\C++\" ; if ($?) { g++ rawfile.cpp -o rawfile } ; if ($?) { .\rawfile }
// 5
// 1 2 3 4 5
// 3
// 4 5 1 2 3 
// PS C:\Users\User\OneDrive\Desktop\chetan\C++> 
