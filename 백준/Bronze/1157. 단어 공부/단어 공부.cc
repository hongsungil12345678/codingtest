#include<iostream>
using namespace std;
int alpha[26],count=0;
string temp;
// ASCII 대문자 : 65~90 소문자 : 97~122 

int main(){
    cin>>temp;
    int max=0,max_index=0;
    for(int i=0;i<temp.length();i++){
        if(temp[i]<97){// 대문자 저장
            alpha[temp[i]-65]++;
        }
        else{
            alpha[temp[i]-97]++;
        }
    }
    for(int i=0;i<26;i++){
        if(alpha[i]>max){
            max=alpha[i];
            max_index=i;
        }
    }
    for(int i=0;i<26;i++){
        if(max==alpha[i]){
            count++;
        }
    }
    if(count>1){
        cout<<"?";
    }
    else{
        cout<<(char)(max_index+65);
    }
    
}