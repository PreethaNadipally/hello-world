void swap(int *,int*);
main()
{
int x,y;
scanf("%d",&x);
scanf("%d",&y);
swap(&x,&y);
}
void swap(int *a,int *b)
{
int tmp;
tmp=*a;
*a=*b;
*b=tmp;
}




