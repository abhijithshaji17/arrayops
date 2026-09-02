#include "array.h"
template<class U>
std::ostream& operator<<(std::ostream& out, array<U>& array){
    out<<"[";
    for(int i=array.LB;i<array.UB;i++){
        out<<array.a[i];
        if(i!=array.UB){
            out<<",";
        }
    }
    out<<"]"<<std::endl;
    return out;
}

// Print Array
template<typename T>
void printarr(T a[], int size){
    out << "Array: ";
    out<<"[";
    for (int i = 0; i < size; i++)
        out << a[i] << " ";
    out<<"]";
}

// Insert at Beginning
template<typename T>
void insertbeg(T a[], int &size, T value) {
    for (int i = size; i > 0; i--){
        a[i] = a[i - 1];                //shift all elements one spot right
    }
    a[0] = value;
    size++;
}

// Insert at End
template<typename T>
void insertend(T a[], int &size, T value) {
    a[size] = value;
    size++;                                 //increment to increase array elements
}

// Insert at Position
template<typename T>
void insertpos(T a[], int &size, int pos, T value) {
    if (pos < 0 || pos > size) {
        cout << "Invalid Position!\n";
        return;
    }

    for (int i = size; i > pos; i--){
        a[i] = a[i - 1];
    }
    a[pos] = value;
    size++;
}