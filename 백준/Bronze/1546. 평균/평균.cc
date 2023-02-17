#include<iostream>
using namespace std;
int main(){
    int N;
    double arr[1001]={0,};
    double max=0,avg=0;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>arr[i];
        if(max<=arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<N;i++){
        arr[i]=arr[i]/max*100;
        avg=avg+arr[i]/N;
    }
    cout<<avg;
    return 0;
    
    
}