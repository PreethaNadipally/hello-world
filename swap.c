
#include<stdio.h>

int main()
{
int x,y,*a,*b,tmp;
scanf("%d",&x);
scanf("%d",&y);
swap(&x,&y);
  printf("before swapping:x=%d and y=%d",x,y);
}
void swap(int *a,int *b)
{
int tmp;
tmp=*a;
*a=*b;
*b=tmp;
  printf(x,y);
   printf("after swapping:x=%d and y=%d",x,y);
}




