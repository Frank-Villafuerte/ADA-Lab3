#include <iostream>
#include <vector>
#include "MergeSort.h"
int main()
{
    vector<int> test = { 8,7,6,5,4,3,2,1 };
    MergeSort<int> mergesort;
    mergesort.Sort(test);

    for (int i : test)
    {
        cout << i << " ";
    }
    cout<<endl;
    return 1;
}