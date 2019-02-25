#include <iostream>

using namespace std;

short count_bits(unsigned int x){
    cout << "count_bits : X :"<<x << endl;
    short num_bits = 0;
    while(x){
        cout<<"X : "<<x<<endl;
        num_bits += x & 1;
        x >>= 1;
    }
    return num_bits;
}
short Parity(unsigned long x) {
short result = 0;
while (x) {
    cout<<"x : "<<x<<endl;
result ^= 1;
x &= (x - 1); // Drops the lowest set bit of x.
}
return result;
}


int main()
{
    cout << "Hello World!" << endl;
    //cout <<"num_bits : "<<count_bits(11)<<endl;
    short ab = Parity(11);
    cout<<"parity :"<<ab<<endl;
    return 0;
}
