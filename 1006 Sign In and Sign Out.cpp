/*1006 Sign In and Sign Out
Input Specification:Each input file contains one test case. Each case contains the records for one day. 
The case starts with a positive integer M, which is the total number of records, followed by M lines, 
each in the format:ID_number Sign_in_time Sign_out_time
where times are given in the format HH:MM:SS, and ID_number is a string with no more than 15 characters.
Output Specification:
For each test case, output in one line the ID numbers of the persons who have unlocked and locked the door on that day.
 The two ID numbers must be separated by one space.
Note: It is guaranteed that the records are consistent. 
That is, the sign in time must be earlier than the sign out time for each person, 
and there are no two persons sign in or out at the same moment.
*/ 
#include<stdio.h>

struct record {
	char idNum[20];
	int h, m, s;
} earliest, latest, temp;

bool MoreEup(record a, record b) {
	if(a.h != b.h) {
		return a.h > b.h;
	} else if(a.m != b.m) {
		return a.m > b.m;
	} else {
		return a.s > b.s;
	}
} 

bool LessEup(record a, record b) {
	if(a.h != b.h) {
		return a.h < b.h;
	} else if(a.m != b.m) {
		return a.m < b.m;
	} else {
	return a.s <b.s; 
    }
}

void init() {
	earliest.h = 23; earliest.m = 59; earliest.s = 59;
	latest.h = 1; latest.m = 0; latest.s = 0;
}

int main() {
	init();
	int m;
	scanf("%d", &m);
	for(int i=0; i<m; i++) {
		scanf("%s %d:%d:%d", temp.idNum, &temp.h, &temp.m, &temp.s);
		if(LessEup(temp, earliest)) {
			earliest = temp;
		}
		scanf(" %d:%d:%d", &temp.h, &temp.m, &temp.s);
		if(MoreEup(temp, latest)) {
			latest = temp;
		}
    }
	printf("%s %s\n", earliest.idNum, latest.idNum);
	return 0;
}
