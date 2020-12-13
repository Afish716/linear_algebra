//
// Created by Guoheng on 2020/12/10.
//

#include "Basic_class.h"


Martix::Martix(int m,int n,int x):_m(m),_n(n){
    pointer=new int*[m];
    for (int i = 0; i <m ; ++i) {
            pointer[i]=new int[n];
    }
    for (int i = 0; i <m ; ++i) {
        for (int j = 0; j <n ; ++j) {
            pointer[i][j]=x;
        }
    }
}

Martix::Martix(int m,int n):_m(m),_n(n){
     new(this)Martix(m,n,0);
}

/*Martix* operator+(Martix const& x1, Martix const& x2){
    int m1=x1._m,n1=x1._n;
    int m2=x2._m,n2=x2._m;
    if (m1!=m2||n1!=n2){
        cout<<"wrong format!";
        return (Martix*)NULL;
    }
    Martix* resulet=new Martix(m1,n1,0);
    int** ptr=resulet->getPtr();
    int** ptr1=x1.getPtr();
    int** ptr2=x2.getPtr();
    for (int i = 0; i <m1 ; ++i) {
        for (int j = 0; j <n1 ; ++j) {
            ptr[i][j]=ptr1[i][j]+ptr2[i][j];
        }
    }
    return resulet;
}*/

Martix::~Martix() {
    for (int i = 0; i <_m ; ++i) {
        delete [] pointer[i];
    }
    delete pointer;//析构函数
}



