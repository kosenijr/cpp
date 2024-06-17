#include "std_lib_facilities.h"

// enumeration of currencies
enum Notes
{
    naira,
    kroner,
    yen,
    yuan,
    pounds,
    euro,
    franc,
    rupee,
    real
};

// get rates: switch statement w/ Notes type
Notes get_conversion_rates(char note) =
    {
        switch (note){
            case naira:
                return 1484.14;
                break;
            case kroner:
                return 10.69;
                break;
case yen:
return 157.32;
break;
case yuan:
return 7.14;
break;
case pounds:
return 0.79;
break;
case euro:
return 0.93;
break;
case franc:
return 0.89;
break;
case rupee:
return 82.10
break;
case real:
return 4.83;
break;
    default:
return null;
break;
    }
}