#include<iostream>
#include<string>
using namespace std;
int main(){
    int a,b,c;
    int count[10]={0,};
    cin>>a>>b>>c;
    int sum=a*b*c;
    string temp=to_string(sum);
    
    for(char ch:temp){
        count[ch-'0']++;
    }
    for(int i:count){
        cout<<i<<endl;
    }
    return 0;
}