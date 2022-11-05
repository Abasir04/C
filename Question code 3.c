#include <stdio.h>
#include <math.h>

int main()
{
  int n;
  int index = 1;
  printf("Enter a number to count to: ");
  scanf("%d", &n);
  while(index <= n)
    {
        printf("%d\n", index);
        index++;
    }
  return 0;
}
