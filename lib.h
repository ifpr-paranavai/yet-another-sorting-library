#ifndef __LIB__
#define __LIB__

using uint_t = unsigned int;

template <typename T>
inline void swap (T *x, T *y)
{
	T temp = *x;
	*x = *y;
	*y = temp;
}

#endif

