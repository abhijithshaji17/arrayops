#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
#include <ostream>

template <class T>
class array
{
    int lb, ub;   
    T a[100];     

    public:
    array();                                
    void setLB(int x);                    
    void setUB(int x);                     
    int  getLB();                          
    int  getUB();                          
    void create();                         
    void insert_end(T key);             
    void insert_beg(T key);       // Fixed: added '('
    void insert_pos(int, T key);  
    void delete_end();                  
    void delete_beg();            // Fixed: added '('
    void delete_pos(int);          
    template<class U> friend ostream& operator<<(ostream&, const array<U>&);
};