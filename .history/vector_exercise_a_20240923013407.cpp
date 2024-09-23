#include "std_lib_facilities.h"

int main()
{
    // given vectors with specified sizes default values
    // int
    vector<int> vi(5);
    // string
    vector<string> vs(12);
    // bool
    vector<bool> vb(30);
    // double
    vector<double> vd(17);
    // exp
    vector<int>number_expected(20);

    // check out size each vector
    cout
        << "Length of int vector: " << vi.size() << '\n'
        << "Length of string vector: " << vs.size() << '\n'
        << "Length of bool vector: " << vb.size() << '\n'
        << "Length of double vector: " << vd.size() << '\n';

    return 0;
}