/*
Given a string S, containing special characters and all the alphabets, reverse the string without
affecting the positions of the special characters.

Input
The first line of input contains an integer T denoting the number of test cases. Then T test cases
follow. 
The first line of each test case contains a case-insensitive string S.

Output
Print out the reversed string without  affecting special characters.

Constraints
1 <= T <= 100
0 <   S  <= 100

Examples 

Input
3
A&B
abc%sld*
dakA&*hA@#N

Output
B&A
dls%cba*
NAhA&*ka@#d
*/
#include <iostream>
#include<algorithm>
using namespace std;

bool special_char(char a){
    return ((a>='a' && a<='z') || (a>='A' && a<='Z'));
}

int main() {
	int t;
	
	cin>>t;
	
	while(t--){
	    string s;
	    
	    cin>>s;
	    
	    int n = s.length();
	    
	    int start = 0, end = n-1;
	    
	    while(start<end){
	        
	        if(!special_char(s[start])){
	            start++;
	        }
	        else if(!special_char(s[end])){
	            end--;
	        }
	        
	        else{
	            swap(s[start],s[end]);
	            start++;
	            end--;
	        }
	    }
	    
	   cout<<s<<endl;
	}
	return 0;
}
