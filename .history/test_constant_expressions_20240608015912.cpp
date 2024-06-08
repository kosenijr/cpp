#include "std_lib_facilities.h"

// globally initializing constant expression
constexpr int abc = 317;

// use function
void use(int n)
{
    // utilize "const"
    const int abcUpdated = abc + n;
    cout << abcUpdated << "\n";
};

int main()
{
    cout << abc << "\n";
    use(8);
    use(10);
    cout << use << "\n";
    return 0;
}