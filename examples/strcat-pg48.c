// strcat: concatenate t to end of s; s must be big enough

#include <stdio.h>

void str_cat(char s[], char t[]) {
  int i, j;
  i = j = 0;
  while (s[i] != '\0') // find end of s
    i++; // the ++ could have been included in the array brackets. 
  while ((s[i++] = t[j++]) != '\0') // copy t. Incrament of i and j happen right in the array brackets.
    ;
}

int main(){
   char string1[80] = "abc";
   char string2[] = "def";
   str_cat(string1, string2);
   printf("%s\n", string1);
   return 0;
}

