#include<string>
#include <iostream>
#include <stack>
using namespace std;

bool solution(string s)
{
    bool answer = false;
    stack<char> temp;
    for(int i=0;i<s.length();i++){
        if(temp.empty()){
            temp.push(s[i]);
        }
        else if(temp.top()=='('&&s[i]==')'){
            temp.pop();
        }
        else{
            temp.push(s[i]);
        }
    }
    if(temp.empty()){
        answer=true;
    }
    
    return answer;
}