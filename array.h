#include <iostream>
using std::cout;
using std::cin;
using std::ostream;

template <class T>
class array{
    int lb, ub;   
    T a[100];     

public:
    array();                                
    void setLB(int x);                    
    void setUB(int x);                     
    int  getLB();                          
    int  getUB();                          
    void create();                         
    void insert_beg(T key);       
    void insert_pos(int, T key);  
    void insert_end(T key);             
    void delete_beg();            
    void delete_pos(int);          
    void delete_end();                  
    template<class U> friend ostream& operator<<(ostream&, const array<U>&);
};