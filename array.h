#include <iostream>

template<typename T>
class array {
    int lb, ub;
    T a[100];
public:
    array();
    void setLB();
    void setUB();
    void create();
    void display();
    void insert_beg(T key);
    void insert_pos(T key, int pos);
    void insert_end(T key);
    void delete_beg();
    void delete_pos(int pos);
    void delete_end();
};

