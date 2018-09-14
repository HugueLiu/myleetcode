#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <string>
using namespace std;


class Solution {
public:
	bool fun(string s,string t){
		int m = s.size();
		int n = t.size();
		for(int i = 0; i < min(m,n); i++){
			if(s[i] == t[i]){
				continue;
			}
			if(s[i] < t[i]){
				return true;
			}else{
				return false;
			}
		}
		return m < n;
	}

	vector<string> split(string &s){
		int n = s.size();
		vector<string> vs;
		string temp;
		for(int i = 0; i < n; i++){
			if(s[i] == ' '){
				vs.push_back(temp);
				temp = "";
			}else{
				temp += s[i];
			}
		}
		vs.push_back(temp);
		return vs;
	}


    string replaceWords(vector<string>& dict, string sentence) {
        sort(dict.begin(), dict.end());
        int n = dict.size();

       

        vector<string> vs = split(sentence);
        int m = vs.size();
        
        sentence = "";
        for(int i = 0; i < m; i++){
        	string s = vs[i];
        	for(int j = 0; j < n; j++){
        		if(s[0] < dict[j][0]){
        			break;
        		}
        		if(s[0] > dict[j][0]){
        			continue;
        		}
        		if(s.find(dict[j]) == 0){
        			vs[i] = dict[j];
        			break;
        		}
        	}
        	sentence += " " + vs[i];
        }
        return sentence.substr(1);
    }
};


int	main(){
	Solution s;
	vector<string> vs = {"cat", "bat", "rat"};
	string ss = "the cattle was rattled by the battery";
	cout << s.replaceWords(vs,ss) << endl;
	return 0;
}