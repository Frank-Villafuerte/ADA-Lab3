#include <iostream>
#include <vector>
#include "MergeSort.h"
#include "Utils.h"
#include "types.h"
int main()
{
    vector<int> test = { 8,7,6,5,4,3,2,1 };
    //MergeSort<int> mergesort;
    vector<Student> students = { {"464","name 1",15.5},{"464","name 1",12.5},{"464","name 1",18.5},{"464","name 1",5.5},{"464","name 1",4.5},
    {"464","name 1",8.5}, {"464","name 1",9.5}, {"464","name 1",0.5}, };
    MergeSort<Student> mergesort;
    mergesort.Sort(students,false);
    //mergesort.Sort(test,false);
    //mergesort.Sort(test, true);
    //MergeSort<int> inverse(true);
    
    for (Student s : students)
    {
        cout << s.promedio << " ";
    }
    cout << endl;
    return 1;
    cout << "Ordered: " << (Utils<int>::IsSorted(test,false)?"OK" :"FAIL")<<endl;
    for (int i : test)
    {
        cout << i << " ";
    }
    cout<<endl;
    return 1;
}