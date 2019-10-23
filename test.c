#include <stdio.h>

void main(){
	int minute,second;
	long long int damage;
	long long int DamagePerSecond;
	long long int DamagePerMinute;
	while(1){
	printf("請輸入多少分鐘(ex:6:32就輸入6)\n");
	scanf("%d",&minute);
	printf("請輸入多少秒(ex:7:55就輸入55)\n");
	scanf("%d",&second);
	printf("請輸入總傷害\n");
	scanf("%lld",&damage);
	DamagePerSecond = damage/(minute*60+second);
	DamagePerMinute = DamagePerSecond*60;
	printf("所花時間為%d:%d\n",minute,second);
	printf("輸出為%lld\n",damage);
	printf("每秒平均傷害為：%lld\n",DamagePerSecond);
	printf("每分平均傷害為：%lld\n",DamagePerMinute);
	printf("----------------------------------\n");
	}
	system("pause");
}

