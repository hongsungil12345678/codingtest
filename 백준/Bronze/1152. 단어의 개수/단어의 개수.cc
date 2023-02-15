#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    string temp;
    getline(cin,temp);
    int count=1;
    for(int i=0;i<temp.length();i++){
        if(temp[i]==' '){
            count++;
        }
    }
    if(temp[0]==' '){
        count--;
    }
    if(temp[temp.length()-1]==' '){
        count--;
    }
    cout<<count<<endl;
    
}