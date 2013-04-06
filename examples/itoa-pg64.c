// itoa: convert n to characters in s
#include <stdio.h>
#include <string.h>

// reverse string s in place
void reverse(char s[]) {
  int c, i, j;
  for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
}

void itoa(int n, char s[]) {
  int i, sign;
  printf("integer is: %d\n", n);
  if ((sign = n) < 0)       // record sign
    n = -n;                 // make n positive
  i = 0;
  do {                      // generate digits in reverse order
    s[i++] = n % 10 + '0';  // get next digit
  } while ((n /= 10) > 0);  // delete it
  if (sign < 0)
    s[i++] = '-';

  s[i] = '\0';
  reverse(s);               // reverse the string to the correct order
  
  printf("string is:  ");
  for(i=0; i <= strlen(s)-1; i++)
    printf("%c", s[i]);
  printf("\n");
}

int main(void) {
  int n=65382;
  char s[30];
  itoa(n, s);
  return 0;
}

