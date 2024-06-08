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
    use(8); // these lines are sent to the standard output stream of line 11 of the use function.
    use(10); // these lines are sent to the standard output stream of line 11 of the use function.
    use(12); // these lines are sent to the standard output stream of line 11 of the use function.
    return 0;
}