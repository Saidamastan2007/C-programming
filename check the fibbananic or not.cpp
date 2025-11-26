#include<stdio.h>
int main(){
	int n,i,f1=0,f2=1,f3;
	scanf("%d",&n);
	while (i<n){
		if (n==f1){
			printf("yes");
			return 0;
		}
		f3=f2+f1;
		f1=f2;
		f2=f3;
	}
	
		printf("no");
	
	return 0;
}
