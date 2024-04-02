#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// N * N 
int N,cnt=0;
const int MAX = 16;
int map[MAX];

bool promising(int row){
    for(int i=0;i<row;i++){
        if(map[i]==map[row] || row-i == abs(map[row]-map[i])){
            return false;
        }
    }
    return true;
}

void dfs(int row){
    if(row == N){
        cnt++;
        return;
    }
    for(int i=0;i<N;i++){// i->col
        map[row]=i;
        if(promising(row)){
            dfs(row+1);
        }
    }
}

int main(){
    cin>>N;
    dfs(0);
    cout<<cnt;
    return 0;
    
}



