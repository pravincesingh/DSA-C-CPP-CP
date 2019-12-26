/* GENERIC PROGRAMMING -> ANY DATA TYPE */

#include<iostream>
using namespace std;

template <typename T>

int size_in_bits(const T& a){
    return sizeof(a)*8;
}

int main(){
    cout<< size_in_bits(21)<<endl;
    cout<< size_in_bits('f')<<endl;
    cout<< size_in_bits(32.1f)<<endl;
    cout<< size_in_bits(32.1)<<endl;

return 0;
}

/*
COMPONENTS OF THE C++ STL
1) Containers
array like data structures that store collections of objects
2) Iterators
pointer like objects that allow traversal of containers
3) Algorithms
A collection of algorithms implementations for operations such search and sort
4) Functors
Function objects that can be parametrised in their constructors
*/
