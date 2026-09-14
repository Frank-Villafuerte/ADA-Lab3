#include <iostream>
#include <vector>
#include "MergeSort.h"
#include "Utils.h"
int main()
{
    vector<int> test = { 8,7,6,5,4,3,2,1 };
    MergeSort<int> mergesort;
    mergesort.Sort(test,false);
    mergesort.Sort(test, true);
    //MergeSort<int> inverse(true);


    cout << "Ordered: " << (Utils<int>::IsSorted(test,false)?"OK" :"FAIL")<<endl;
    for (int i : test)
    {
        cout << i << " ";
    }
    cout<<endl;
    return 1;
}