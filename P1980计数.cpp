#include<stdio.h>
#include<math.h>
void fun(int number,int a[])
{
	int i;
	int res;
	for (i = 6; i >= 1; i--)
	{
		if (number / (int)pow(10, i) != 0)
			break;
	}
	for (; i >= 0; i--)
	{
		res = number / (int)pow(10, i);  // res =
		number = number % (int)pow(10, i);// num = 2
		a[res]++;
	}
}
/*
* 2432  i=3
a[2]=20  a[3]=20   a[4]=20
a[2]=22  a[3]=21 a[4]=21
*/
int main()
{
	int a[10] = { 0 };
	int n, x;
	scanf_s("%d %d", &n, &x);
	for (int i = 1; i <= n; i++)
	{
		fun(i, a);
	}
	printf("%d", a[x]);
	return 0;
}

/*12345
12345/10000=1 12345%10000=2345
2345/1000=2 2345%1000=345
345/100 = 3   345%100 = 45
*/