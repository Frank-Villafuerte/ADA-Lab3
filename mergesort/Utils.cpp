#include "Utils.h"

template<typename T>
bool Utils<T>::IsSorted(vector<T> list, bool inverse)
{
	if(inverse)//si la lista debe ser decreciente
		for (int i = 0;i < list.size() - 1;i++)
			if (list[i] < list[i + 1]) return false;
	else//lista creciente
		for (int i = 0;i < list.size() - 1;i++)
			if (list[i] > list[i + 1]) return false;
	
	return true;
}
template class Utils<int>;