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
    vector<int> number_expected(20);

    // check out size each vector
    // cout
    //     << "Length of int vector: " << vi.size() << '\n'
    //     << "Length of string vector: " << vs.size() << '\n'
    //     << "Length of bool vector: " << vb.size() << '\n'
    //     << "Length of double vector: " << vd.size() << '\n'
    //     << "Length of int vector: " << number_expected.size() << '\n';

        // check out the elements of each vector
        // int
        cout << "int \n";
        for (int values:vi) {
            cout << values << '\n';
        }
        // string
        cout << "string \n";
        for (string values:vs) {
            cout << values << '\n';
        }
        // bool
        vb.push_back(true); // included 1 at the end of bool vector.
        cout << "bool \n";
        for (bool values:vb) {
            cout << values << '\n';
        }
        // double
        cout << "double \n";
        for (double values:vd) {
            cout << fixed << setprecision(2) << values << '\n';
        }
        // int
        cout << "number_expected \n";
        for (int values:number_expected) {
            cout << values << '\n';
        }

    return 0;
}