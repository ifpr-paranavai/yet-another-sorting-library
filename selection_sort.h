#ifndef __YASL_SELECTION_SORT__
#define __YASL_SELECTION_SORT__

#include "lib.h"

namespace yasl
{
	template <typename T>
	void selection_sort (T *arr, uint_t length)
	{
		for (uint_t i = 0; i < length; i++) {
			uint_t min_index = i;
			
			for (uint_t j = i + 1; j < length; j++) {
				if (arr[j] < arr[min_index]) {
					min_index = j;				
				}
			}	
			
			swap<T>(&arr[min_index], &arr[i]);
		}
	}
}

#endif

