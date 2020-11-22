/*
Given an array of distinct integers, find length of the longest subarray which contains numbers that can be arranged in a continuous sequence.
Examples:

Input:  arr[] = {10, 12, 11};
Output: Length of the longest contiguous subarray is 3

Input:  arr[] = {14, 12, 11, 20};
Output: Length of the longest contiguous subarray is 2

Input:  arr[] = {1, 56, 58, 57, 90, 92, 94, 93, 91, 45};
Output: Length of the longest contiguous subarray is 5
*/

#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int LSAC(int arr[], int n){
    
    sort(arr, arr+n);
    
    int count = 0;
    
    int maxLen = 0;
    for(int i=1; i<n; i++){
        
        if(arr[i]-arr[i-1] == 1){
            count++;
        }
        else{
            count = 1;
        }
        
        if(count>=maxLen){
            maxLen = count;
        }
    }
    
    return maxLen;
}

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    cout<<LSAC(arr, n)<<endl;
	
	    
	}
	
	return 0;
}

/*
https://ide.geeksforgeeks.org/zbMt4bQv5z
*/
