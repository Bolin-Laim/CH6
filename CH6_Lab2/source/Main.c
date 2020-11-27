#include <stdio.h>
#include <stdlib.h>
#include "order.h"
int main(void)
{
	order ord1 = { "AHK08A1024",{1994,3,8},1487 };
	order ord2 = { "USA08A1025",{2015,5,20},54530 };
	order ord3 = { "UNK08A1028",{2020,8,7},6638613 };

	printf("   **************************\n");
	printf("   *    訂單資料            *\n");
	printf("   **************************\n");

	printf("========================================\n");
	printf("訂單編號    訂貨日期     訂貨金額  \n");
	printf("========================================\n");

	printf("%-10s %8d/%02d/%02d    NT$%10d\n", ord1.num, ord1.date.years, ord1.date.month
		, ord1.date.day, ord1.amout);

	printf("%-10s %8d/%02d/%02d    US$%10d\n", ord2.num, ord2.date.years, ord2.date.month
		, ord2.date.day, ord2.amout);

	printf("%-10s %8d/%02d/%02d    HK$%10d\n", ord3.num, ord3.date.years, ord3.date.month
		, ord3.date.day, ord3.amout);

	printf("\n\n");
	system("pause");
	return 0;
}