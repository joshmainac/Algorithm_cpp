#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isValid(string s);
void test1_isValid();
void test2_isValid();
void test3_isValid();


int main() {
    test1_isValid();
    test2_isValid();
    test3_isValid();



    bool ans = isValid("{{{{{{}}}}}{}}");

    return 0;
}

bool isValid(string s) {
    stack<char> stk;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            stk.push(c);
          
        }
        else {
            if (stk.empty() || c == ')' && stk.top() != '(' || c == ']' && stk.top() != '[' || c == '}' && stk.top() != '{') {
                return false;
            }
            stk.pop();
        }
    }

    if (stk.empty())
    {
        return true;
    }
    else{
        return false;
    }
    
    
}

void test1_isValid()
{
    //input {{{{{{}}}}}{}} in bool isValid(string s)
    //ans should be true
    bool ans = isValid("{{{{{{}}}}}{}}");
    if (ans == true)
    {
        printf("test1 succeed\n");
    }
}

void test2_isValid()
{
    //input ()[]{} in bool isValid(string s)
    //ans should be true
    bool ans = isValid("()[]{}");
    if (ans == true)
    {
        printf("test2 succeed\n");
    }
}


void test3_isValid()
{
    //input {{{{{{{} in bool isValid(string s)
    //ans should be false
    bool ans = isValid("{{{{{{{}");
    if (ans == false)
    {
        printf("test3 succeed\n");
    }
}
