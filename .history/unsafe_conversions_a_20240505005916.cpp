#include "std_lib_facilities.h"

int main()
{
    double d = 0;
    while (cin >> d)
    {
        int i = d;
        char c = i;
        int i2 = c;
        cout << "d == " << d
             << "\ni == " << i
             << "\ni2 == " << i2
             << "\nchar(" << c << ")\n";
    }
}

/*
2
d == 2
i == 2
i2 == 2
char()
3
d == 3
i == 3
i2 == 3
char()
127
d == 127
i == 127
i2 == 127
char()
1000
d == 1000
i == 1000
i2 == -24
char(▒)
-56
d == -56
i == -56
i2 == -56
char(▒)
-89
d == -89
i == -89
i2 == -89
char(▒)
-128
d == -128
i == -128
i2 == -128
char(▒)
-127
d == -127
i == -127
i2 == -127
char(▒)
-129
d == -129
i == -129
i2 == 127
char()
56.9
d == 56.9
i == 56
i2 == 56
char(8)
56.2
d == 56.2
i == 56
i2 == 56
char(8)
*/