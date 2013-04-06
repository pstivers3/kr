#include <stdio.h>  // added by me
#include <ctype.h>
#include "calc.h"  // commented out declarations in this file are in calc.h
// #define NUMBER '0'; // added by me, even though it's in rpn-pg76.c

// int getch(void);
// void ungetch(int);

// getop: get next character or numeric operand
int getop(char s[]) {
  int i, c;
  while ((s[0] = c = getch()) == ' ' || c == '\t')
    ;
  s[1] = '\0';
  if (!isdigit(c) && c != '.')
    return c;  // not a number
  i = 0;
  if (isdigit(c))  // collect integer part
    while (isdigit(s[++i] = c = getch()))
      ;
  if (c == '.')  // collect fraction part
    while (isdigit(s[++i] = c = getch()))
      ;
  s[i] = '\0';
  if (c !=EOF)
    ungetch(c);
  return NUMBER;
}

