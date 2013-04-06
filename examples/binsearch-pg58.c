// binsearch: find x in v[0] <= v[1] <= ... <= v[n-1]
// prints index n of value x in the array, or -1 if x is not found

#include <stdio.h>

int binsearch(int x, int v[], int n) {
  int low, high, mid;
  low = 0;
  high = n - 1;
  
  printf("l   h   m\n");
  while (low <= high) {
    mid = (low+high)/2;
    printf("%d   %d   %d\n", low, high, mid);
    if (x < v[mid])
      high = mid - 1;
    else if (x > v[mid])
      low = mid + 1;
    else  // found match
      return mid;
  }
  return -1; // no match
}

void main() {
  int n=10;
  int v[10]={1,2,3,7,12,15,22,27,45,55};
  // int result1 = binsearch(3,v,n));
  // printf("%d\n", result1);
  printf("index of 3 is %d\n\n", binsearch(3,v,n));
  printf("index of 16 is %d\n\n", binsearch(16,v,n));
}

