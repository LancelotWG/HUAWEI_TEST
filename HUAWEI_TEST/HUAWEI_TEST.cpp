// HUAWEI_TEST.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"

void sort(int* array, int len);

int test[] = {9,3,4,2,8,12,11,5,6,10,7,1,0};

void main()
{
	sort(test,13);
	return ;
}

int zeroIndex(int* array, int len){
	for (int i = 0; i < len; i++){
		if (array[i] == 0){
			return i;
		}
	}
}

void swap_with_zero(int* array, int len, int n){
	int zeroIndexn = zeroIndex(array, len);
	for (int i = 0; i < len; i++){
		if (array[i] == n){
			array[zeroIndexn] = n;
			array[i] = 0;
			break;
		}
	}
	
}

void sort(int* array, int len) {
	for (int i = 0; i < len; i++){
		if (array[i] != i && array[i] != 0){
			swap_with_zero(array, len, array[array[i]]);
			swap_with_zero(array, len, array[i]);
		}
	}
	for (int i = 0; i < len; i++){
		if (array[i] != i && array[i] != 0){
			swap_with_zero(array, len, array[array[i]]);
			swap_with_zero(array, len, array[i]);
		}
	}
}
