#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int temp1=0;
    int temp2=0;
    for(char& ch:s){
        ch|=32;//소문자 변환
    }
    for(int i=0;i<s.length();i++){
        if(s[i]=='p'){
            temp1++;
        }
        if(s[i]=='y'){
            temp2++;
        }
    }
    return temp1==temp2? true:false;
}