#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;


class Solution {
public:
    static bool fun(vector<int> a, vector<int> b){
        if(a[0] == b[0]){
            return a[1] < b[1];
        }
        return a[0] < b[0];
    }
    
    int findLongestChain(vector<vector<int> >& pairs) {
        
        sort(pairs.begin(), pairs.end(), fun);

        int n = pairs.size();        
        

        int max = 0, begin = 0, first;
        for(int i = 1; i < n; i++){
            first = pairs[i][0];
            for(int j = begin; j < i; j++){
                if(pairs[j][1] < first){
                    begin = i;
                    max++;
                    break;
                }
            }
        }
        max++;
        return max;
        
    }
};



int main(){
    Solution s;
    //[[-6,9],[1,6],[8,10],[-1,4],[-6,-2],[-9,8],[-5,3],[0,3]]
    vector<vector<int> > pairs= {{-6,9},{1,6},{8,10},{-1,4},{-6,-2},{-9,8},{-5,3},{0,3}};
    cout << s.findLongestChain(pairs) << endl;
}