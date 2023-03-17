#include<iostream>
using namespace std;
int main(){
    // 4의 배수 +100의 배수가 아닐때
    // 400의 배수일때
    int N;
    cin>>N;
    if( N%4==0 && N%100!=0){
        cout<<1<<endl;
    }
    else if(N%400==0){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}