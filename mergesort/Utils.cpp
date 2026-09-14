#include "Utils.h"
#include "types.h"

template<typename T>
bool Utils<T>::IsSorted(vector<T> list, bool inverse)
{
	for (int i = 0;i < list.size() - 1;i++)
		if ((inverse&&list[i] < list[i + 1])||(!inverse&& list[i] > list[i + 1])) return false;
	
	return true;
}
template class Utils<int>;
template class Utils<float>;
template class Utils<Student>;