#ifndef __YASL_BUBBLE_SORT__
#define __YASL_BUBBLE_SORT__

#include "lib.h"

namespace yasl
{
	
	template <typename T>
	void bubble_sort (T *arr, uint_t length) 
	{
		for (uint_t i = 0; i < length; i++) {
			for (uint_t j = 0; j < length - i - 1; j++) {
				if (arr[j] > arr[j + 1]) {
					swap<T>(&arr[j], &arr[j + 1]);
				}
			}
		}
	}
}

#endif

