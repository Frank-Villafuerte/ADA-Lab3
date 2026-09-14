#include <iostream>
#include <vector>
#include "MergeSort.h"
#include "Utils.h"
#include "types.h"
int main()
{
    //MergeSort<int> mergesort;
    vector<Student> students = { {"464","name 1",15.5},{"464","name 1",12.5},{"464","name 1",18.5},{"464","name 1",5.5},{"464","name 1",4.5},
    {"464","name 1",8.5}, {"464","name 1",9.5}, {"464","name 1",0.5}, };
    MergeSort<Student> mergesort;
    mergesort.Sort(students,true);
    //mergesort.Sort(test,false);
    //mergesort.Sort(test, true);
    //MergeSort<int> inverse(true);
    
    
    cout << "Ordered: " << (Utils<Student>::IsSorted(students, true)?"OK" :"FAIL")<<endl;
    return 1;
}