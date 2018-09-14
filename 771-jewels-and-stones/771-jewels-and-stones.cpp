class Solution {
public:
    int numJewelsInStones(string J, string S) {
    	int ret = 0;
    	int J_len = J.size();
    	int S_len = S.size();
        for(int i = 0; i < S_len; i++){
        	char temp = S[i];
        	for(int j = 0; j < J_len; j++){
        		if( temp == J[j]){
        			ret++;
        			break;
        		}
        	}
        }
    return ret;
    }
};