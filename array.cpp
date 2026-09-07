#include "array.h"
int val;

template <class T>
array<T>::array()
{
    lb = 1;
    ub = 0;
}

template <class T>
void array<T>::setLB(){ 
    cin >> lb; 
}

template <class T>
void array<T>::setUB(){ 
    cin >> ub;
}

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
void array<T>::insert_beg(T key){
    cout<<"\nEnter value to insert: ";
    cin>>val;
    for(i=ub-1;i>=lb;i--){                // Shift existing elements one position to the right
        a[i+1] = a[i];
    }
    a[lb] = val;                         // Insert new value at the lower bound
    ub++;                  
}
template <class T>
void array<T>::insert_pos(T key,int pos){

}
template <class T>
void array<T>::insert_end(T key){

}
template <class T>
void array<T>::delete_beg(){

}
template <class T>
void array<T>::delete_pos(int pos){

}
template <class T>
void array<T>::delete_end(){

}