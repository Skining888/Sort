#pragma once
//函数说明：找出要排序的数组元素的最大值
// 入参：int arr[],要排序的数组地址
//		 int n,要排序的数组的元素个数
// 出参：返回最大值
int FindMax(int arr[], int n);

//函数说明：找出要排序的数组元素的最小值
// 入参：int arr[],要排序的数组地址
//		 int n,要排序的数组的元素个数
// 出参：返回最小值
int FindMin(int arr[], int n);

//函数说明：从最小值统计每一个数字的出现次数，每次遍历最小值+1，直到遍历完最大值
// 入参：int arr[],要排序的数组地址
//		 int n,要排序的数组的元素个数
//		 int pos，要统计的数字
// 出参：返回统计的数字pos的次数
int Count(int arr[], int n, int pos);

//函数说明：将存放统计数字出现次数的数组内容，转换放到原数组arr[]中
// 入参：int arr[]，原需要排序的数组地址
//		 int count_arr[]，存放数字出现次数的数组地址
//		 int max，原数组中元素中的最大值
//		 int min，原数组中的元素的最小值
// 出参：无
void Sort(int arr[], int count_arr[], int max, int min);

//函数说明：根据原数组元素中的最大值和最小值，max-min+1,计算出存放数字出现次数的数组的大小，依次从最小值开始调用Count（）统计次数，并依次放入统计次数的数组count_arr[]中
// 入参：int arr[],要排序的数组地址
//		 int n,要排序的数组的元素个数
//出参：无
void CountSort(int arr[], int n);


//计数排序总结：
// 中心思想：遍历找出要排序的数组的最大值和最小值，根据最大值和最小值，计算需要开辟存放数字出现次数的数组的大小，并开辟好空间
// 从最小值开始，依次统计出现的次数，并依次放入前面开辟好的数组中
// 最后按照每个数字出现的次数，从最小值开始，依次放入原数组中，每次min++，直到放完max,排序结束（count的值，决定每次min要放多少个到原数组）
// 计数排序是不稳定的
// 计数排序的时间复杂度是：O（n）,标准的以空间换时间
//