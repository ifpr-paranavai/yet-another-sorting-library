#ifndef __YASL_QUICK_SORT__
#define __YASL_QUICK_SORT__

#include "lib.h"

namespace yasl 
{
	template <typename T>
	T partition (T *arr, uint_t start, uint_t end)
	{	
		uint_t pivot = end;
		uint_t j = start;
		
		for(uint_t i = start; i < end; i++) {
			if(arr[i] < arr[pivot]){
				swap<T>(&arr[i], &arr[j]);
				j++;
			}
		}
		
		swap<T>(&arr[j], &arr[pivot]);
		return j;	
	}

	template <typename T>
	void quick_sort (T *arr, uint_t start, uint_t end) {
		if(start < end){
			T p = partition(arr, start, end);
			
			quick_sort(arr, start, p - 1);
			quick_sort(arr, p + 1, end);
		}
	}
}

#endif

