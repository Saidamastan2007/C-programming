#include<stdio.h>
int main()
{
	int i,a[10],n,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    sum=sum+a[i];
    printf("Sum is:%d",sum);
    return 0;
}
