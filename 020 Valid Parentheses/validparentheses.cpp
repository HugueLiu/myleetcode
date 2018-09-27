class Solution {
public:
    bool isValid(string s) {
        if(s.size() == 0) return true;
        map<char,char> char_map;
        char_map.emplace('(',')');
        char_map.emplace('{','}');
        char_map.emplace('[',']');
        stack<char> char_stack;
        char_stack.push(s[0]);
        for(int i = 1; i < s.size(); i++) {
            if(char_stack.size() == 0) char_stack.push(s[i]);
            else {
                char top = char_stack.top();
                if(char_map[top] == s[i]) char_stack.pop();
                else char_stack.push(s[i]);
            }
        }
        if(char_stack.empty()) return true;
        else return false;
    }
};
