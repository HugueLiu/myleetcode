class Solution {
public:
	int numJewelsInStones(string J, string S) {
		int uc[26] = {0};
		int lc[26] = {0};
		int j_len = J.size();
		int s_len = S.size();
		int ret = 0;
		for(int i = 0; i < s_len; i++){
			if(S[i]<='z' && S[i]>= 'a'){
				lc[S[i]-'a']++;
			}else{
				uc[S[i]-'A']++;
			}
		}
		for(int i = 0; i < j_len; i++){
			if(J[i]<='z' && J[i]>= 'a'){
				ret += lc[J[i]-'a'];
			}else{
				ret += uc[J[i]-'A'];
			}
		}
		return ret;
	}
};