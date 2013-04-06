#include <stdio.h>

void main() {
  int i, n=100, a[100];
  for (i = 0; i < n; i++)
    printf("%6d%c", a[i]=i+1, (i%10==9 || i==n-1) ? '\n' : 'x');
}

