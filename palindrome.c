#include<stdio.h>
void main()
{
	int n,rev,temp;
	scanf("%d",&n);
	temp = n;
	
	
	
while(n!=0)
{
	rev=rev*10;
	rev=n%10+rev;
	n/=10;
          	
}
if(rev==temp)
printf("yes");
else
printf("no");
return 0;
}
