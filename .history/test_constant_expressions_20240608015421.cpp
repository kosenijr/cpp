#include "std_lib_facilities.h"

// globally initializing constant expression
constexpr int abc = 317;

// use function
void use(int n)
{
    // utilize "const"
    const int abcUpdated = abc + n;
}

int main()
{
    cout << abc << "\n";
    cout << N << "\n";
    return 0;
}