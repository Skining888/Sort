#pragma once

//函数说明：遍历寻找第一个乱序的数字的下标
//入参：int arr[]:要排序的元素的地址
//      int n  数组元素的个数
//      int count 遍历的起始位置
//出参：return pos:返回第一个乱序的数字的下标
//      return 0：说明数组元素有序，无需排序
int Insert(int arr[], int n, int count);

//函数说明：遍历 N-1 次完成插入排序操作
//入参：int arr[]:要排序的元素的地址
//      int n  数组元素的个数
//出参：无
void InsertSort(int arr[], int n);



//插入排序总结
//中心思想：类似打扑克牌，按照要排序的顺序，将不符合顺序的数字插入到符合排列顺序的位置，每次插入的时候都要保证之前的元素有序
//插入排序的时间复杂度为：O（N^2）;
//