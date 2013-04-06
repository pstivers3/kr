// shellsort: sort v[0]...v[n-1] into increasing order

#include <stdio.h>

void shellsort(int v[], int n) {
  int gap, i, j, k, temp;
  // print original aray
  printf("original array is:     ");
  for (i=0; v[i] != '\0'; i++) 
    printf("%d  ", v[i]);
  printf("\n");
  // sort routine
  for (gap = n/2; gap > 0; gap /= 2) {
    printf("loop 1: gap = %d\n", gap);
    for (i = gap; i < n; i++) {
      printf("loop 2: i = %d\n", i);
      printf("going into loop 3: j = %d, j+gap = %d, v[j] = %d, v[j+gap] = %d\n", i-gap, i, v[i-gap], v[i]);
      for (j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap) {
        printf("loop 3: j = %d, j+gap = %d\n", j, j+gap);
        printf("before swap; v[j] = %d, v[j+gap] = %d\n", v[j], v[j+gap]);
        temp = v[j];
        v[j] = v[j+gap];
        v[j+gap] = temp;
        printf("after swap; v[j] = %d, v[j+gap] = %d\n", v[j], v[j+gap]);
        // print sorted array
        printf("partially sorted array is: ");
        for (k=0; v[k] != '\0'; k++) 
          printf("%d  ", v[k]);
        printf("\n");
      }
    }
  }
  printf("final sorted array is:     ");
  for (i=0; v[i] != '\0'; i++) 
    printf("%d  ", v[i]);
  printf("\n");
}

void main() {
  int n = 10;
  int v[10] = {23, 52, 12, 9, 12, 53, 11, 1, 91, 102};
  shellsort(v, n);
}

