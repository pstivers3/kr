// shellsort: sort v[0]...v[n-1] into increasing order

#include <stdio.h>

void printarray(int v[]) {  
  int i;
  for (i=0; v[i] != '\0'; i++) 
    printf("%d  ", v[i]);
  printf("\n");
}

void shellsort(int v[], int n) {
  int gap, i, j, temp;
  // print original aray
  printf("original array is: ");
  printarray(v);
  // sort routine
  for (gap = n/2; gap > 0; gap /= 2) 
    for (i = gap; i < n; i++)
      for (j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap) {
        temp = v[j];
        v[j] = v[j+gap];
        v[j+gap] = temp;
      }
  // print sorted array
  printf("sorted array is:   ");
  printarray(v);
}

void main() {
  int n = 10;
  int v[10] = {23, 52, 12, 9, 12, 53, 11, 1, 91, 102};
  shellsort(v, n);
}

