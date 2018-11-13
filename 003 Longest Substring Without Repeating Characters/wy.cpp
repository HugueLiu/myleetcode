//too slow O(n2)
/*
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = s.size();
        if(s == " ") return 1;
        if(length == 0) return 0;
        string longest_substring;
        longest_substring.push_back(s[0]);
        int max_num = 1;
        for(int i = 1; i < length; i++) {
            for(int j = i; j < length; j++) {
                int pos = longest_substring.find(s[j]);
                if(pos == string::npos) {
                    longest_substring.push_back(s[j]);
                }
                else {
                    break;
                }
            }
            if(longest_substring.size() > max_num) max_num = longest_substring.size();
            longest_substring = s[i];
        }
        if(longest_substring.size() > max_num) max_num = longest_substring.size(); 
        return max_num;
    }
};
*/

#include <string>
#include <map>
#include <iostream>
#include <cassert>
using namespace std;

class Solution
{
 public:
    Solution(){};
    int lengthOfLongestSubstring(string s)
    {
        map<char, int> m;
        int maxLen = 0;
        int lastRepeatPos = -1;

        for(int i = 0; i < s.size(); i++)
        {
            if(m.find(s[i]) != m.end() && lastRepeatPos < m[s[i]])
            {
                lastRepeatPos = m[s[i]];
            }
            if(i - lastRepeatPos > maxLen)
            {
                maxLen = i - lastRepeatPos;
            }
            m[s[i]] = i;
        }
        return maxLen;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
