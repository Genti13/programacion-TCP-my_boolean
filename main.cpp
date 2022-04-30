#include <iostream>
#include "classes/Boolean.h"

using namespace std;

int main()
{
    Boolean bTrue(1);
    Boolean bFalse;

    Boolean falseANDTrue = bFalse * bTrue;
    Boolean falseORTrue = bFalse + bTrue;

    cout << "True: " << bTrue.getValue() <<endl;
    cout << "False: " << bFalse.getValue() <<endl;

    cout << endl;

    cout << "NOT True: " << bTrue._NOT().getValue() <<endl;
    cout << "NOT False: " << bFalse._NOT().getValue() <<endl;

    cout << endl;

    cout << "True AND True: " << bTrue._AND(bTrue).getValue() << endl;
    cout << "True AND False: " << bTrue._AND(bFalse).getValue() << endl;
    cout << "False AND True: " << bFalse._AND(bTrue).getValue() << endl;
    cout << "False AND False: " << bFalse._AND(bFalse).getValue() << endl;

    cout << endl;

    cout << "True OR True: " << bTrue._OR(bTrue).getValue() << endl;
    cout << "True OR False: " << bTrue._OR(bFalse).getValue() << endl;
    cout << "False OR True: " << bFalse._OR(bTrue).getValue() << endl;
    cout << "False OR False: " << bFalse._OR(bFalse).getValue() << endl;

    cout << endl;

    cout << "False * True: " << falseORTrue.getValue() << endl;
    cout << "False + True: " << falseANDTrue.getValue() << endl;

    return 0;
}
