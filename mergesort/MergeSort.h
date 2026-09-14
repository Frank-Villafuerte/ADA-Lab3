#pragma once
#include <vector>
using namespace std;

template<typename T>
class MergeSort
{
private:
	vector<T> aux;
	bool inverseOrder;
private:
	void Sort(vector<T>& list, int low, int high);
	void Merge(vector<T>& list, int low, int mid, int high);
public:
	void Sort(vector<T>& list,bool inverse);
};