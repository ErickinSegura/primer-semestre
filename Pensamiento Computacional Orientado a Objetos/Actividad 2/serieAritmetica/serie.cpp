
#include "serie.h"
#include <iostream>
using namespace std;

serie::serie() {
    a=1;
    d=3;
    n=25;
    z=0;
    res=0;
}

void serie::calcVal() {
    for (int i = 1; i <= n; ++i) {
        int x=(a+((i)*d));
        res=res+x;
    }
    cout<<"El valor: "<<n<<" es:"<<res<<endl;

}

serie::~serie() {

}
