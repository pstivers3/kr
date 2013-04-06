#include <stdio.h>
#define MAXLINE 1000 // maximum input line length

// renamed getline to getlin so it doesn't conflict with function is stdio.h
int getlin(char line[], int max);  
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";  // pattern to search for

// find all lines matching pattern
main() {
  char line[MAXLINE];
  int found = 0;
  
  while (getlin(line, MAXLINE) > 0)
    if (strindex(line, pattern) >= 0) {
      printf("%s", line);
      printf("%d\n", strindex(line,pattern));
      found++;
    }
  return found;
}

// getlin: get line into s, return length
int getlin(char s[], int lim) {
  int c, i;
  
  i = 0;
  while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
    s[i++] = c;
  if (c == '\n')
    s[i++] = c;
  s[i] = '\0';
  return i;
}

// strindex: return index of t in s, -1 if none
int strindex(char s[], char t[]) {
  int i, j, k;
  
  for (i = 0; s[i] != '\0'; i++) {
    if (s[i] = t[k])
      for (j=i, k=0; s[i]==t[k]; j++, k++)
        if (t[k]='\0')
          return i;
  }
  return -1;
}

