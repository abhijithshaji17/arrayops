// Menu driven array basic operations program
#include "array.h"
template <class T>
void array<T>::setLB(int x)
{
    lb = x;
}
 
template <class T>
void array<T>::setUB(int x)
{
    ub = x;
}
 
template <class T>
int array<T>::getLB()
{
    return lb;
}
 
template <class T>
int array<T>::getUB()
{
    return ub;
}
template <class T>
array<T>::array()
{
    lb = 1;
    ub = 0;
    for (int i = lb; i <= ub; i++){
        a[i] = 0;
    }
}
template <class T>
void array<T>::create()
{
    int i;
    cout << "Enter the elements:\n";
    for (i = lb; i <= ub; i++){
        cout<<"Element "<<i+1<<": ";
        cin >> a[i];
    }
}
template <class T>
void array<T>::insert_beg(T key)
{
    for (int i = ub; i >= lb; i--)
    {
        a[i + 1] = a[i];
    }
    a[lb] = key;
    ub = ub + 1;
}
template <class T>
void array<T>::insert_end(T key)
{
    int pos = ub + 1;
    a[pos] = key;
    ub = ub + 1;
}
template <class T>
void array<T>::insert_pos(int p, T key)
{
    if (p > ub || p < lb)
    {
        cout << "invalid position" << endl;
        return;
    }
 
    for (int i = ub; i >= p; i--)
    {
        a[i + 1] = a[i];
    }
    a[p] = key;
    ub = ub + 1;
}
template <class T>
void array<T>::delete_end()
{
    ub = ub - 1;
}
template <class T>
void array<T>::delete_beg()
{
    for (int i = lb; i <= ub - 1; i++)
    {
        a[i] = a[i + 1];
    }
    ub = ub - 1;
}
template <class T>
void array<T>::delete_pos(int p)
{
    if (p > ub || p < lb)
    {
        cout << "invalid position" << endl;
        return;
    }
    for (int i = p; i <= ub - 1; i++)
    {
        a[i] = a[i + 1];
    }
    ub = ub - 1;
}
template <class U>
ostream& operator<<(ostream& os, const array<U>& m)
{
    int i;
    os << "\nArray:\n";
    os<<"[";
    for (i = m.lb; i <= m.ub; i++){
        os << m.a[i] << " ";
    }
    os << "]\n";
    return os;
}