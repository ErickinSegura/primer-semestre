#include <iostream>
using namespace std;

int main() {

    float edad, emer, ejup, even, esat;

    cout<<"Que edad tienes en la tierra? ";
    cin>>edad;

    emer=(edad*365)/88;
    even=(edad*365)/225;
    ejup=(edad*365)/4380;
    esat=(edad*365)/10767;

    cout<<"Tu edad en Mercurio seria "<<emer;
    cout<<"\nTu edad en Venus seria "<<even;
    cout<<"\nTu edad en Jupiter seria "<<ejup;
    cout<<"\nTu edad en Saturno seria "<<esat;



    return 0;
}
