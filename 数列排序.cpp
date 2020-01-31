//#include<stdio.h>
//int main()
//{
//	int a[200];
//	int	i, n,j,f;
//	scanf_s("%d", &n);
//	for (i = 0; i < n ; i++)
//	{
//		scanf_s("%d", &a[i]);
//	}
//	for (i = 0; i < n - 1; i++) 
//	{
//		for (j = 0; j < n - 1 - i; j++) 
//		{
//			if (a[j] > a[j + 1]) 
//			{
//				f = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = f;
//			}
//		}
//	}
//	for (i = 0; i < n; i++) 
//	{
//		printf("%d", a[i]);
//	}
//	return 0;
//}