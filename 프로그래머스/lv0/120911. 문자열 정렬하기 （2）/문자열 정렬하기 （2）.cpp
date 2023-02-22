#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// ascii 대문자65-90 소문자97-122
string solution(string my_string) {
    string answer = "";
    for(auto& ch:my_string){
        ch=tolower(ch);
    }
    sort(my_string.begin(),my_string.end());
    return my_string;
}