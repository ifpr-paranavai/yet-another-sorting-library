#ifndef __YASL_MERGE_SORT__
#define __YASL_MERGE_SORT__

#include <math.h>
#include <iostream>

#include "lib.h"

namespace yasl
{
	template <typename T>
	void merge (T *arr, uint_t start, uint_t mid, uint_t end)
	{
		uint_t i, j, k;
		
		uint_t length = end - start + 1;
				
		T *temp = new T[length * sizeof(T)];
				
		uint_t first_half = start;
		
		uint_t second_half = mid + 1;

		bool fh_end = false, sh_end = false;
		
		for (i = 0; i < length; i++) {
			if (!fh_end && !sh_end) {
				if (arr[first_half] < arr[second_half]) {
					temp[i] = arr[first_half++];
				} else {
					temp[i] = arr[second_half++];
				}
				
				if (first_half > mid) fh_end = true;
				if (second_half > end) sh_end = true;
			} else {
				if (!fh_end) {
					temp[i] = arr[first_half++];
				} else {
					temp[i] = arr[second_half++];
				}
			}
		}
		
		for (j = 0, k = start; j < length; j++, k++) {
			arr[k] = temp[j];
		}
		
		delete temp;
	}

	template<typename T>
	void merge_sort (T *arr, uint_t start, uint_t end)
	{	
		uint_t mid;
				
		if (start < end) {
			mid = floor((start + end) / 2);
			
			merge_sort(arr, start, mid);
			merge_sort(arr, mid + 1, end);
			merge(arr, start, mid, end);
		} 
	}
}

#endif

