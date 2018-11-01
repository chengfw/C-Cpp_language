/*1027 Colors in Mars
People in Mars represent the colors in their computers in a similar way as the Earth people. That is, a color is represented by a 6-digit number,
 where the first 2 digits are for Red, the middle 2 digits for Green, and the last 2 digits for Blue. 
 The only difference is that they use radix 13 (0-9 and A-C) instead of 16. 
 Now given a color in three decimal numbers (each between 0 and 168), you are supposed to output their Mars RGB values.
Input Specification:
Each input file contains one test case which occupies a line containing the three decimal color values.
Output Specification:
For each test case you should output the Mars RGB value in the following format: first output #, then followed by a 6-digit number where all the English characters must be upper-cased.
 ע�⣺If a single color is only 1-digit long, you must print a 0 to its left.
outnumber = a*13^1+b*13^0;
*/ 
#include<cstdio>

int main() {
	char rgb[13] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C'};
	int red, green, blue;
	scanf("%d %d %d", &red, &green, &blue);
	printf("#");
	printf("%c%c", rgb[red/13], rgb[red%13]);
	printf("%c%c", rgb[green/13], rgb[green%13]);
	printf("%c%c\n", rgb[blue/13], rgb[blue%13]);
	
	return 0;
}
