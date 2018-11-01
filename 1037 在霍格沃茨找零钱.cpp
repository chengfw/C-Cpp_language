/*1037 在霍格沃茨找零钱 ：十七个银西可(Sickle)兑一个加隆(Galleon)，二十九个纳特(Knut)兑一个西可
输入格式：
输入在 1 行中分别给出 P 和 A，格式为 Galleon.Sickle.Knut，其间用 1 个空格分隔。这里 Galleon 是 [0, 10^7] 区间内的整数，
Sickle 是 [0, 17) 区间内的整数，Knut 是 [0, 29) 区间内的整数。
输出格式：
在一行中用与输入同样的格式输出哈利应该被找的零钱。如果他没带够钱，那么输出的应该是负数。 
（该题另一种解法：将货币都换成Knut单位，然后相减之后再转换为原来的格式
注意：相减之后的零钱要取绝对值，通过判断正负来输出符号，不能直接代入后面的运算 ） 
*/ 
#include<cstdio>

struct Money {
	int g, s, k;
} rMoney, oMoney, temp;

bool LessEup(Money a, Money b) {
	if(a.g != b.g) {
		return a.g < b.g;
	} else if(a.s != b.s) {
		return a.s < b.s;
	} else if(a.k != b.k){
		return a.k < b.k;
	}
}

int main() {
	scanf("%d.%d.%d", &rMoney.g, &rMoney.s, &rMoney.k);
	scanf("%d.%d.%d", &oMoney.g, &oMoney.s, &oMoney.k);
	if(LessEup(oMoney, rMoney)) {
			if(rMoney.k >= oMoney.k)	{
			temp.k = rMoney.k - oMoney.k;
		} else {
			temp.k = rMoney.k+29 - oMoney.k;
			rMoney.s -= 1;
		}
		if(rMoney.s >= oMoney.s) {
			temp.s = rMoney.s - oMoney.s;
		} else {
			temp.s = rMoney.s+17 - oMoney.s;
			rMoney.g -= 1;
		}
		temp.g = rMoney.g - oMoney.g;
		printf("-%d.%d.%d\n", temp.g, temp.s, temp.k);
	} else {
		if(oMoney.k >= rMoney.k)	{
			temp.k = oMoney.k - rMoney.k;
		} else {
			temp.k = oMoney.k+29 - rMoney.k;
			oMoney.s -= 1;
		}
		if(oMoney.s >= rMoney.s) {
			temp.s = oMoney.s - rMoney.s;
		} else {
			temp.s = oMoney.s+17 - rMoney.s;
			oMoney.g -= 1;
		}
		temp.g = oMoney.g - rMoney.g;
		printf("%d.%d.%d\n", temp.g, temp.s, temp.k);
	}
	return 0;
}

