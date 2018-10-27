#include <iostream>
using namespace std;

int AddInt ( int a_AddInt, int b_AddInt )
{
    int c_AddInt = a_AddInt + b_AddInt;
    return c_AddInt;
}

auto AddAuto ( auto a_AddAuto, auto b_AddAuto ) // Non pas que je ne sache pas le type, mais que je sais que c'est du type "je ne sais pas", à ignorer.
{
    auto c_AddAuto = a_AddAuto + b_AddAuto;
    return c_AddAuto;
}

int main()
{
    cout << AddInt ( 40, 2 ) << endl;
    cout << AddAuto ( 40.0, 2.5 ) << endl;
    return 0;
}
