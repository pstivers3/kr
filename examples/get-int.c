#include <stdio.h>
#define SIZE 20

int getint(int *);

main()
{
	int n, array[SIZE], getint(int *);

	for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++)
		printf("%d", array[n]);
	printf("\n");

	return 0;
}

#include <ctype.h>

int getch(void);
void ungetch(int);

/* getint:  get next integer from input into *pn */
int getint(int *pn)
{
	int c, sign;

	while (isspace(c = getch())) /* skip white space */
		;
	if (!isdigit(c) && c != EOF && c != '+' && c != '-'){
		ungetch(c);		/* it's not a number */
		return 0;
	}
	sign = (c == '-') ? -1: 1;
	if (c == '+' || c == '-')
		c = getchar();
	for (*pn = 0; isdigit(c); c = getchar())
		*pn = 10 * *pn + (c - '0');
	*pn *= sign;
	if (c != EOF)
		ungetch(c);
	return c;
}



