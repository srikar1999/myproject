#include <stdio.h>

bb(int n,int r)
{
printf(" %d %d ",n,r);
if(r==0 || n==r)
 return 1;
 else
 return bb(n-1,r)+bb(n-1,r-1);
}
 

void main()
{
 printf("%d",bb(4,2));
}

