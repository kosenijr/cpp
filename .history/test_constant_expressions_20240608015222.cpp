#include "std_lib_facilities.h"

// globally initializing constant expression
constexpr int abc = 317;

// use function
void use (int n) {
    // utilize "const"
    const abcUpdated = abc + n;
}

int main() {
    use(8);
    cout << use(8) << "\n";
    return 0;
}