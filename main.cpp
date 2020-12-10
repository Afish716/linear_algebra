#include <iostream>
#include "Basic_class.h"
int main() {
    Martix* test = new Martix(6,6,2);
    Martix* test1 = new Martix(6,6,3);
    Martix* test2 = *test1+*test;
    auto ptr=test2->getPtr();
    for (int i = 0; i <6 ; ++i) {
        for (int j = 0; j <6 ; ++j) {
            int number=ptr[i][j];
            cout<<number;
            if (j!=5){
                cout<<" ";
            } else{
                cout<<'\n';
            }
        }
    }
}
