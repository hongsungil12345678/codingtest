#include<stdio.h>
int i,a,b,c;
int main(){
	for(int i=1;i<=9;i++){
        scanf("%d",&c);
        if(c>a){
            a=c;b=i;
        }
    }
	printf("%d\n%d",a,b);
    return 0;
}