#include <stdio.h> 
void main ()
{
int *p,n,i;
printf("enter n value: ");
scanf("%d", &n);
p = (int i = 0; i < n; ++i);
printf("Entering integers:\n ");
for(i = 0; i < n; ++i)
{
scanf("%d",p+i);
}
free(p);
}