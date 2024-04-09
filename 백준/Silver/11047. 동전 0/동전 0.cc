#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int N,NUM;
    int index=0;
    int count=0;
    vector<int> arr;
    cin>>N>>NUM;
    int ans=NUM;
    for(int i=0;i<N;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end(),greater<>());


    while(1){
        if(ans == 0){
            break;
        }
        else if(arr[index]<=ans){
            ans-=arr[index];
            count++;
        }
        else{
            index++;
        }
    }
    cout<<count<<endl;
    return 0;
   
}