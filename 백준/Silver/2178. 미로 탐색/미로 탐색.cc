#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;
int N,M;
int visited[101][101];
int check[101][101];
char map[101][101];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

void bfs(int x,int y){
  visited[x][y]= 1;
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));// 시작점
    while(!q.empty()){
        int temp_x = q.front().first;
        int temp_y = q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int next_x = temp_x+dx[i];
            int next_y = temp_y+dy[i];
         
            
			if (0 <= next_x && next_x < N && 0 <= next_y && next_y < M){// 맵 범위
                // 길이 존재하고 , 방문한적이 없다면
                if(map[next_x][next_y]=='1'&&visited[next_x][next_y]==0){
					check[next_x][next_y] = check[temp_x][temp_y] + 1;
					visited[next_x][next_y] = 1;
					q.push(make_pair(next_x, next_y)); // 큐에 데이터 밀어넣기
                }
            }
        }
    }
}
int main(){
    scanf("%d %d",&N,&M);
    for(int i=0;i<N;i++){
        scanf("%s",map[i]);
    }
    bfs(0, 0);
	printf("%d\n", check[N - 1][M - 1] + 1);
}