#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int temp=0;
    int max=0,index=0;
    for(int i=1;i<=9;i++){
        cin>>temp;
        if(max<temp){
            index=i;
            max=temp;
        }
    }
    cout<<max<<endl;
    cout<<index<<endl;
    return 0;

}