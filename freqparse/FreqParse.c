#include <stdio.h>

int main() {

		int c;
		int nDigit = 0;
		int nLower = 0;
		int total = 0;
		int nOther = 0;

		while ((c = getchar()) != EOF) {
			if (c >= '0' && c <= '9') {
				nDigit++;
				total++;
			}
			else if ( c >= 'a' && c <= 'z') {
				nLower++;
				total++;
			}
			else if ( c == ' ' || c == '\n' || c == '\t') {
				continue;
			} else {
				nOther++;
				total++;
			}
		}

		printf("The number of digits found was %d\n", nDigit);
		printf("The percentage of digits total was %1.1f%%\n", 100.0 * nDigit/total );
		printf("The number of lowercase letters found was %d\n", nLower);
		printf("The percentage of lower case total was %1.1f%%\n", 100.0 * nLower/total );
		printf("The number of other characters found was %d\n", nOther);
		printf("The percentage of characters total was %1.1f%%\n", 100.0 * nOther/total );

		return 0;
}
