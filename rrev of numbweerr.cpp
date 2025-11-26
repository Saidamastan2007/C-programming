#include<stdio.h>
int main(){
	int n,sum=1,r,x;
	scanf("%d",&n);
	x=n ;
	while(n!=0){
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if (sum==x){
		printf("yes");
	} else {printf("no");
	}

	return 0;
}

