#include <stdio.h>

#define IN 1    /* in word */
#define OUT 0   /* out word */

int main() {
	int c, nl, nw, nc, state;
	/* 行数，单词数，字符数 */
	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n') {
			++nl;
		}
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("line word char\n%4d %4d %4d\n", nl, nw, nc);
	return 0;
}
