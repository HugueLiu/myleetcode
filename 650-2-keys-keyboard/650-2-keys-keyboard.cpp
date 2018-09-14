class Solution {
public:
	int minSteps(int n) {
		if(n == 1){
			return 0;
		}
		int count = 0;
		while(1){
			int i;
			for(i = 2; i < n; i++){
				if(n % i == 0){
					n = n / i;
					count += i;
					break;
				}
			}
			if(i == n){
				count += n;
				break;
			}
		}
		return count;
	}
};


#include <iostream>
using namespace std;

int main(){
	Solution s;
	cout << s.minSteps(150) << endl;
	return 1;
}