/*1037 �ڻ����ִ�����Ǯ ��ʮ�߸�������(Sickle)��һ����¡(Galleon)����ʮ�Ÿ�����(Knut)��һ������
�����ʽ��
������ 1 ���зֱ���� P �� A����ʽΪ Galleon.Sickle.Knut������� 1 ���ո�ָ������� Galleon �� [0, 10^7] �����ڵ�������
Sickle �� [0, 17) �����ڵ�������Knut �� [0, 29) �����ڵ�������
�����ʽ��
��һ������������ͬ���ĸ�ʽ�������Ӧ�ñ��ҵ���Ǯ�������û����Ǯ����ô�����Ӧ���Ǹ����� 
��������һ�ֽⷨ�������Ҷ�����Knut��λ��Ȼ�����֮����ת��Ϊԭ���ĸ�ʽ
ע�⣺���֮�����ǮҪȡ����ֵ��ͨ���ж�������������ţ�����ֱ�Ӵ����������� �� 
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

