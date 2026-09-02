#include<iostream>
template<typename T>
class array{
    int lb,ub;
    T a[100];
    public:
        array();
        int getLB();
        int getUB();
        void insert_beg(T);
        void insert_pos(T, int);
        void insert_end(T);
        void delete_beg();
        void delete_pos(int);
        void delete_end();
};