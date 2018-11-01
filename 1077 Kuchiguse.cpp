/*1077 Kuchiguse
The Japanese language is notorious for its sentence ending particles. 
Personal preference of such particles can be considered as a reflection of the speaker's personality. 
Such a preference is called "Kuchiguse" and is often exaggerated artistically in Anime and Manga. 
For example, the artificial sentence ending particle "nyan~" is often used as a stereotype for characters 
with a cat-like personality:
Itai nyan~ (It hurts, nyan~)
Ninjin wa iyada nyan~ (I hate carrots, nyan~)
Now given a few lines spoken by the same character, can you find her Kuchiguse?
Input Specification:
Each input file contains one test case. For each case, the first line is an integer N (2¡ÜN¡Ü100). 
Following are N file lines of 0~256 (inclusive) characters in length, each representing a character's spoken line. 
The spoken lines are case sensitive.
Output Specification:
For each test case, print in one line the kuchiguse of the character, i.e., 
the longest common suffix of all N lines. If there is no such suffix, write nai.
*/ 
#include<stdio.h>
#include<string.h>

int main() {
	char str[100][256];
	int n, flag=1, minlen=256, count=0;
	scanf("%d", &n);
	getchar();
	for(int i=0; i<n; i++) {
		gets(str[i]);
		int len = strlen(str[i]);
		if(len < minlen) {
			minlen = len;
		}
		for(int j=0; j<len/2; j++) {  //·´×ª×Ö·û´® 
			char temp = str[i][j];
			str[i][j] = str[i][len-1-j];
			str[i][len-1-j] = temp;
		}
	}
	for(int i=0; i<minlen; i++) {
		char c = str[0][i];
		for(int j=1; j<n; j++) {
			if(c != str[j][i]) {
				flag = 0;
				break;
			}
		}
		if(flag) count++;
		else break;
	} 
	if(count) {
		for(int i=count-1; i>=0; i--) {
			printf("%c", str[0][i]);
		}
	} else {
		printf("nai\n");
	}
	return 0;
}
