#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(int age) {
    string answer = "";
    string temp=to_string(age);
    //a-0 b1 c2
    //ascii A-65 a-97
    //ascii 0 -> 48
    for(int i=0;i<temp.length();i++){
        cout<<temp[i]<<endl;
        answer+=temp[i]+49;
        cout<<answer<<endl;
    }
    return answer;
}