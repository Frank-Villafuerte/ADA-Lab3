#pragma once
#include <string>
using namespace std;
struct Student
{
    string codigo;
    string nombre;
    float promedio;
    bool operator<(Student other)//requerido para comparacion
    {
        return promedio < other.promedio;
    }
    bool operator>(Student other)
    {
        return promedio > other.promedio;
    }
};