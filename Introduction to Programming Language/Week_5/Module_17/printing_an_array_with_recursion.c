#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
void prt_rcr(int arr[], int n, int i)
{
  // int size=n;
  if (n == 0)
    return;
  printf("%d ", arr[i]);

  prt_rcr(arr, --n, ++i);
}
int main()
{

  int n;
  scanf("%d", &n);
  int arr[n];
  int i = 0;
  int size = n;
  while (n--)
  {
    scanf("%d", &arr[i]);
    i++;
  }
  prt_rcr(arr, size, 0);
  return 0;
}