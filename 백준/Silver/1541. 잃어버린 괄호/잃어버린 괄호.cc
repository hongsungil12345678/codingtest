#include<iostream>
#include<string>
using namespace std;
string str;
int main(void){
    string num = ""; // 임시 문자열 저장
    int sum = 0; // 정답
    bool isMinus = false; // 기호 판단
    cin>>str;
    for(int i=0;i<=str.size();i++){
        // + , - , 문자열 마지막(\0)NULL 이거나
        if(str[i]=='-'|| str[i]=='+' || str[i]=='\0'){
            if(isMinus == true){ // 문자열이 - 인경우
                sum -= stoi(num);  // 빼준다
                num = ""; // 초기화
            }
            else if(isMinus == false){ // + 인경우
                sum += stoi(num);
                num = "";
            }
        }
        else{ // 기호가 아닌경우 문자열 저장
            num += str[i];
        }
        if(str[i]=='-'){ // 기호인 경우
            isMinus = true;
        }
    }
    cout<<sum;
    return 0;
}