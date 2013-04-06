#include <stdio.h>
#define MAXLINE 1000 // maximum input line length

// line, longest, and max are set as external varialbes
// communication is done globall rather than passing values to the functions

// needed to rename getline to getlin because getline is already a function in studio.h
// and therefore threw an exception during compile

int max;                // maximum input line size
char line[MAXLINE];     // current input line
char longest[MAXLINE];  // longest line saved here

// int getlin(char line[], int maxline);
// void copy(char to[], char from[]);
int getlin(void);   // void passed to the function is not strictly required in latest compilers
void copy(void);    

// print the longest input line; external version
main() {
  int len;                   // current line length
  extern int max;            // maximum length seen so far
  extern char longest[];
  // char line[MAXLINE];     // now defined outside the function
  // char longest[MAXLINE];  // now defined outside the function

  max = 0;
  while ((len = getlin()) > 0)
    if (len > max) {
      max = len;
      copy();
    }
  if (max > 0)  // there was a line/
    printf("%s", longest);
  return 0;
}

// getlin: read a line into s, return length
// int getlin(char s[], int lim) {
int getlin(void) {
  int c, i;
  extern char line[];

  for (i=0; i < MAXLINE-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    line[i] = c;
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}

// copy: copy ’from’ into ’to’; assume to is big enough
// void copy(char to[], char from[]) {
void copy(void) {
  int i;
  extern char line[], longest[];
  i = 0;
  while ((longest[i] = line[i]) != '\0')
    ++i;
}

