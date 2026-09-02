#include "array.h"
template<class T>
array<T>::array(){
    lb = 1;
    ub = 0;
    for(int i=lb;i<=ub;i++){
        a[i] = 0;
    }
}
template<class T>
int array<T>::getLB(){
    return lb;
}
template<class T>
int array<T>::getUB(){
    return ub;
}

