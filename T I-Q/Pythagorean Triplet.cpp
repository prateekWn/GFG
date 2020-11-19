/*
Given an array arr of N integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2, otherwise false.

Example 1:

Input:
N = 5
Arr[] = {3, 2, 4, 6, 5}
Output: Yes
Explanation: a=3, b=4, and c=5 forms a
pythagorean triplet.
Example 2:

Input:
N = 3
Arr[] = {3, 8, 5}
Output: No
Explanation: No such triplet possible.
Your Task:
Complete the function checkTriplet() which takes an array arr, single integer n, as input parameters and returns boolean denoting answer to the problem. You don't to print answer or take inputs. 
Note: The driver will print "Yes" or "No" instead of boolean.

Expected Time Complexity: O(max(Arr[i])2)
Expected Auxiliary Space: O(max(Arr[i]))
*/
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here
	    sort(arr, arr+n);
	    
	    for(int i=0; i<n-2; i++){
	        for(int j = i+1; j<n-1; j++){
	            for(int k = j+1; k<n; k++){
	               
	                int x = arr[i] * arr[i];
	                int y = arr[j] * arr[j];
	                int z = arr[k] * arr[k]; 
  
                if (x == y + z || y == x + z || z == x + y) 
                    return true; 
	            }
	        }
	    }
	    return false;
	}
};
