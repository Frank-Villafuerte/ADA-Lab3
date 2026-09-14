#include "MergeSort.h"
#include <iostream>
#include "types.h"

template<typename T>
void MergeSort<T>::Sort(vector<T>& list, int low, int high)
{
	if (high <= low) return;
	int mid = low + (high - low) / 2;
	Sort(list,low,mid);
	Sort(list, mid+1, high);
	Merge(list,low,mid,high);
}
template<typename T>
void MergeSort<T>::Merge(vector<T>& list, int low, int mid, int high)
{
	int i = low;
	int j = mid + 1;
	for (int k = low;k <= high;k++)//copiar fragmento actual
		aux[k] = list[k];
	
	for (int k = low;k <= high;k++)
	{
		if (i > mid) list[k] = aux[j++];
		else if (j > high)list[k] = aux[i++];
		else if ((inverseOrder && aux[j] > aux[i]) ||(!inverseOrder&& aux[j] < aux[i]) ) list[k] = aux[j++];//adaptacion para soportar orden inverso
		else list[k] = aux[i++];
	}	
}
template<typename T>
void MergeSort<T>::Sort(vector<T>& list,bool inverse)
{
	inverseOrder = inverse;
	aux.assign(list.size(), T());//iniciar vector vacío.
	Sort(list, 0, list.size() - 1);
}

//tipos permitidos
template class MergeSort<int>;
template class MergeSort<float>;
template class MergeSort<Student>;

	