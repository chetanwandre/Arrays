// optimal soln of missing no. in an array

// 2 ways to code

// 1)
int missingNumber(vector<int>&a, int N) {
    // Write your code here.
    int xor1 = 0;
    int xor2 = 0;

    // int n = N - 1;
    
    for(int i = 0; i< N - 1; i++) {
        xor2 = xor2 ^ a[i];
        xor1 = xor1 ^ (i+1);
    }

    xor1 = xor1 ^ N;

    return xor1 ^ xor2;
}


// 2)
  int missingNumber(vector<int>&a, int N) {
    // Write your code here.

    int xor1 = 0;   // it is for iteration through the given array
    int xor2 = 0;

    //iterate thro given arr and xor the elements 
    for(int i = 0; i< N-1; i++) {
        xor1 = xor1 ^ a[i];
    }


    //iterate thro the integers and xor
    for(int i = 1; i<= N; i++) {
        xor2 = xor2 ^ i;
    }
    
    return xor1 ^ xor2;
}


