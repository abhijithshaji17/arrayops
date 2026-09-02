#include<ostream>
template<typename T>
class array{
    int i,lb,ub;
    T a[100];
    public:
        array(int lb,int ub){
            LB = lb;
            UB = ub;
            for(i=lb;i<ub;i++){
                a[i] = 0;
            }
        }
        int getLB();
        int getUB();
        void insert(int index, T value);
        template<class U> friend std::ostream& operator<<(std::ostream&, array<U>&);
};