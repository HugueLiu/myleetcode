#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <string>
using namespace std;


class Solution {
public:
	bool isPalin(string s){
		int n = s.size();
		if(n <= 1){
			return true;
		}
		for(int i = 0; i < n/2; i++){
			if(s[i] != s[n-i-1]){
				return false;
			}
		}
		return true;
	}

    int countSubstrings(string s) {
    	int n = s.size();
    	int count = 0;
        for(int i = 0; i < n; i++){
        	for(int j = 1; j < n-i+1; j++){
        		if(isPalin(s.substr(i,j))){
        			count++;
        		}
        	}
        }
        return count;
    }
};




int main(){
	Solution S;
	string s = "abc";

	cout << S.countSubstrings(s)<<endl;
}