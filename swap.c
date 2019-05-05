
#include<stdio.h>

int main(void)
{
  int num1, num2, tmp;
  scanf("%d", &num1);
  scanf("%d", &num2);
  printf("before swapping:num1 = %d and num2 = %d", num1, num2);
  swap(&num1, &num2);
  
}
void swap(int *num1, int *num2)
{
  int *tmp;
  tmp = num1;
  num1 = num2;
  num2 = tmp;
  printf("after swapping:num1 = %d and num2 = %d",*num1, *num2);
}




