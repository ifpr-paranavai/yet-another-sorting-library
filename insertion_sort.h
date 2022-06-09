#ifndef __YASL_INSERTION_SORT__
#define __YASL_INSERTION_SORT__

#include "lib.h"

namespace yasl 
{
	template <typename T> 
	void insertion_sort (T *arr, uint_t length)
	{
		for (uint_t i = 1; i < length; i++) {
			T key = arr[i];
			int j = i-1;
			
			while (j >= 0 && arr[j] > key) {
				arr[j+1] = arr[j];
				j--;
			}
			
			arr[j+1] = key; 
		}
	}	
}

#endif

