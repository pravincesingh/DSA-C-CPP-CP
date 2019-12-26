#include<iostream>
using namespace std;
class MyException1: exception
{

};
class MyException2:public MyException1
{

};
int main()
{
    try
    {
        throw string("stf");
        //throw MyException2();
    }

    catch(int e)
   //catch (MyException2 e)
    {
        cout<<"Int Catch"<<endl;
    }
    catch(double e)
   //catch (MyException1 e)
    {
        cout<<"Double Catch"<<endl;
    }
    catch(...)
    {
        cout<<"all Catch"<<endl;
    }

}
