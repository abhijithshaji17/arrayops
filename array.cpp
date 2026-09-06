#include "array.h"

template <class T>
array<T>::array()
{
    lb = 1;
    ub = 0;
}

template <class T>
void array<T>::setLB(int x) { lb = x; }

template <class T>
void array<T>::setUB(int x) { ub = x; }

template <class T>
void array<T>::create()
{
    cout << "Enter " << (ub - lb + 1) << " elements: ";
    for (int i = lb; i <= ub; i++)
        cin >> a[i];
}

template <class T>
void array<T>::display()
{
    for (int i = lb; i <= ub; i++)
        cout << a[i] << " ";
    cout << endl;
}
template <class T>
void array<T>::