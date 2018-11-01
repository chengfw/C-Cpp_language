#include<cstdio>

struct person {
	char name[10];
	int yy, mm, dd;
} oldest, youngest, left, right, temp;
//oldest与youngest存放最年长与最年轻的人，left与right存放合法日期的左右边界

bool lessEqu(person a, person b) {
	if(a.yy != b.yy) {
		return a.yy <= b.yy;
	} else if(a.mm != b.mm) {
		return a.mm <= b.mm;
	} else {
		return a.dd <= b.dd;
	}
} 

bool moreEqu (person a, person b) {
	if(a.yy != b.yy) {
		return a.yy >= b.yy;
	} else if(a.mm != b.mm) {
		return a.mm >= b.mm;
	} else {
		return a.dd >= b.dd;
	}
}

void init() {
	youngest.yy = left.yy = 1814;
	oldest.yy = right.yy = 2014;
	youngest.mm = oldest.mm = left.mm = right.mm = 9;
	youngest.dd = oldest.dd = left.dd = right.dd = 6;
}

int main() {
	init();  //初始化youngest、oldest、left、right 
	int n, num=0;  //num存放合法日期人数
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		scanf("%s %d/%d/%d", &temp.name, &temp.yy, &temp.mm, &temp.dd);
		if(moreEqu(temp, left) && lessEqu(temp, right)) {  //日期合法 
			if(moreEqu(temp, youngest)) youngest = temp; //更新youngest 
			if(lessEqu(temp, oldest)) oldest = temp;  //更新oldest 
			num++;
		}
	} 
	if(num==0) printf("0\n");   //所有人的日期都不合法，只能输出0 
	else printf("%d %s %s\n", num, oldest.name, youngest.name);
	return 0;
}
