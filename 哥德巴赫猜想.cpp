/*验证哥德巴赫猜想*/ 
#include<stdio.h>
int n;
int is_pr(int x){
	if(x==2) return 1;
	if(x==0||x==1) return 0;
	for(int i=2;i*i<=x;i++){
		if(x%i==0) return 0;
	}
	return 1;
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		if(is_pr(i)&&is_pr(n-i)){
			printf("%d = %d + %d\n",n,i,n-i);
			break;
		}
	}
	return 0;
}
