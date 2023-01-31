#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int  i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	float f = 5.5f;
//	int* p = &a;
//	void* pp = &f;
//	pp = &a;
//	printf("%f\n", *pp);
//	return 0;
//}
struct stu
{
	char name[20];
	int age;
};
int cmp_stu_by_age(const void* e1, const void* e2)
{
	((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
void test2()
{
	struct stu s[3] = { {"zhangsan",20},{"loso",50},{"wangwu",22} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0], cmp_stu_by_age);
}
int main()
{
	test2();
	return 0;
}