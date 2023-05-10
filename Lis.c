// A Naive C recursive implementation
// of LIS problem
#include <stdio.h>
#include <stdlib.h>

// To make use of recursive calls, this
// function must return two things:
// 1) Length of LIS ending with element arr[n-1].
// We use max_ending_here for this purpose
// 2) Overall maximum as the LIS may end with
// an element before arr[n-1] max_ref is
// used this purpose.
// The value of LIS of full array of size n
// is stored in *max_ref which is our final result
int _lis(int arr[], int n, int* max_ref)
{
	// Base case
	if (n == 1)
		return 1;

	// 'max_ending_here' is length of LIS
	// ending with arr[n-1]
	int res, max_ending_here = 1;

	// Recursively get all LIS ending with arr[0],
	// arr[1] ... arr[n-2]. If arr[i-1] is smaller
	// than arr[n-1], and max ending with arr[n-1]
	// needs to be updated, then update it
	for (int i = 1; i < n; i++) {
		res = _lis(arr, i, max_ref);
		if (arr[i - 1] < arr[n - 1]
			&& res + 1 > max_ending_here)
			max_ending_here = res + 1;
	}

	// Compare max_ending_here with the overall
	// max. And update the overall max if needed
	if (*max_ref < max_ending_here)
		*max_ref = max_ending_here;

	// Return length of LIS ending with arr[n-1]
	return max_ending_here;
}

// The wrapper function for _lis()
int lis(int arr[], int n)
{
	// The max variable holds the result
	int max = 1;

	// The function _lis() stores its result in max
	_lis(arr, n, &max);

	// returns max
	return max;
}

// Driver program to test above function
int main()
{
	int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function call
	printf("Length of lis is %d", lis(arr, n));
	return 0;
}

/*    C++ code    using memoization      


// C++ implementation of memoization approach for LIS
#include <bits/stdc++.h>
using namespace std;

// To make use of recursive calls, this
// function must return two things:
// 1) Length of LIS ending with element arr[n-1].
// We use max_ending_here for this purpose
// Overall maximum as the LIS may end with
// an element before arr[n-1] max_ref is
// used this purpose.
// The value of LIS of full array of size n
// is stored in *max_ref which is our final result
int f(int idx, int prev_idx, int n, int a[],
	vector<vector<int> >& dp)
{
	if (idx == n) {
		return 0;
	}

	if (dp[idx][prev_idx + 1] != -1) {
		return dp[idx][prev_idx + 1];
	}

	int notTake = 0 + f(idx + 1, prev_idx, n, a, dp);
	int take = INT_MIN;
	if (prev_idx == -1 || a[idx] > a[prev_idx]) {
		take = 1 + f(idx + 1, idx, n, a, dp);
	}

	return dp[idx][prev_idx + 1] = max(take, notTake);
}

// Function to find length of longest increasing subsequence
int longestSubsequence(int n, int a[])
{
	vector<vector<int> > dp(n + 1, vector<int>(n + 1, -1));
	return f(0, -1, n, a, dp);
}

// Driver program to test above function
int main()
{
	int a[] = { 3, 10, 2, 1, 20 };
	int n = sizeof(a) / sizeof(a[0]);

	// Function call
	cout << "Length of lis is " << longestSubsequence(n, a);
	return 0;
}




*/