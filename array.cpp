#include "array.h"

template<typename T>
array<T>::array(){
    lb = 1;
    ub = 0;
    for(int i=lb;i<=ub;i++){
        a[i] = 0;
    }
}

template<typename T>
int array<T>::getLB(){
    return lb;
}

template<typename T>
int array<T>::getUB(){
    return ub;
}

template<typename T>
void array<T>::insert_beg(T key){
    ub = ub+1;
    int k = ub - 1;
    while(k>=lb){
        a[k+1] = a[k];
        k = k - 1;
    }
    a[lb] = key;
}

template<typename T>
void array<T>::insert_pos(T key, int pos){
    ub = ub + 1;
    int k = ub - 1;
    while(k>=pos){
        a[k+1] = a[k];
        k = k - 1;
    }
    a[pos] = key;
}

template<typename T>
void array<T>::insert_end(T key){
    ub = ub + 1;
    a[ub] = key;
}

template<typename T>
void array<T>::delete_beg(){
    if(ub>=lb){
        for(int k = lb + 1; k<=ub; k++){
            a[k-1] = a[k];
        }
        ub = ub - 1;
    }else{
        cout<<"Array is empty";
    }
}
template<typename T>
void array<T>::delete_pos(int pos){
    if(pos<lb||pos>ub){
        cout<<"Invalid postion\n";
    }
    for(int k = pos; k<ub; k++){
        a[k] = a[k+1];
    }
    ub = ub - 1;
}



