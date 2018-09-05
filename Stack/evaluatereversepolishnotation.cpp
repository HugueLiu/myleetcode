//
// Created by ros on 18-9-5.
//

#include <vector>
#include <stack>
#include <string>
#include <iostream>

using namespace std;

class Solution{
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> int_stack;

        if(tokens.size() <= 1) return stoi(tokens[0]);

        for(int i = 0; i < tokens.size(); i++) {
            string s = tokens[i];
            if(s == "*"){
                int a = int_stack.top();
                int_stack.pop();
                int b = int_stack.top();
                int_stack.pop();
                int c = b * a;
                int_stack.push(c);
                continue;
            }
            if(s == "+"){
                int a = int_stack.top();
                int_stack.pop();
                int b = int_stack.top();
                int_stack.pop();
                int c = b + a;
                int_stack.push(c);
                continue;
            }
            if(s == "/"){
                int a = int_stack.top();
                int_stack.pop();
                int b = int_stack.top();
                int_stack.pop();
                int c = b / a;
                int_stack.push(c);
                continue;
            }
            if(s == "-"){
                int a = int_stack.top();
                int_stack.pop();
                int b = int_stack.top();
                int_stack.pop();
                int c = b - a;
                int_stack.push(c);
                continue;
            }
            int num = stoi(s);
            int_stack.push(num);
        }
        return int_stack.top();

    }
};

int main(int argc, char **argv) {
    return 0;
}
