#include<iostream>
using namespace std;

int main()
{
    // Find the minimum number of person must be present in a room in such a way
    // that probability of having same birthday is 90%


    int num =365;
    int den =365;
    float prob =1;
    int numofperson =0;
    while(prob>0.10)
    {
        prob = prob *( num)/den;
        num--;
        numofperson ++;
        cout<<"The number of person is "<<numofperson<<" | And probability is "<<prob<<endl;
    }
    return 0;
}
