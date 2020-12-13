//
// Created by Guoheng on 2020/12/10.
//

#ifndef LINEAR_ALGEBRA_BASIC_CLASS_H
#define LINEAR_ALGEBRA_BASIC_CLASS_H
class Martix{
    private:
    int** pointer= nullptr;
    public:
    int _m=0,_n=0;
    int** getPtr() const {
        return this->pointer;
    }
    Martix(int m,int n,int x);
    Martix(int m,int n);
    //friend Martix* operator+(Martix const&, Martix const&);
    Martix* operator+(Martix const&){
        //待写
    }
    ~Martix();
};
#endif //LINEAR_ALGEBRA_BASIC_CLASS_H
#include <iostream>
using namespace std;