#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int MAX = 16;
int board[MAX];
int cnt =0;
int N;

bool promising(int row){
    for(int i=0;i<row;i++){
        if(board[row]== board[i] || row-i == abs(board[row]-board[i])){
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
    for(int i=0;i<N;i++){// i-> col
        board[row]= i;
        if(promising(row)){
            dfs(row+1);
        }
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    dfs(0);// 시작
    cout<<cnt;
    return 0;
}