#include <stdio.h>

void printarray(int v[]) {  
  int i;
  for (i=0; v[i] != '\0'; i++) 
    printf("%d  ", v[i]);
  printf("\n");
}

void swap(int v[], int i, int j) {
  int temp;
  temp = v[i];
  v[i] = v[j];
  v[j] = temp
}

// qsort: sort v[left]...v[right] into increasing order
void qsort(int v[], int left, int right) {
  int i, last;
  void swap(int v[], int i, int j);
  
  if (left >= right)  // do nothing if array contains fewer than two elements
    return;
  swap(v, left, (left + right)/2);     // move partition elem to v[0]
  last = left;                      
  for (i = left + 1; i <= right; i++)  // partition
    if (v[i] < v[left])
      swap(v, ++last, i);
  swap(v, left, last);                 // restore partition elem
  qsort(v, left, last-1);
  qsort(v, last+1, right);
}

void main() {
  int left = 5, right = 4;
  int v[10] = {23, 52, 12, 9, 12, 53, 11, 1, 91, 102};
  printf("original array is: ");
  printarray(v);
  shellsort(v, left, right);
  printf("sorted array is:   ");
  printarray(v);
}

