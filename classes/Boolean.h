#ifndef BOOLEAN_H_INCLUDED
#define BOOLEAN_H_INCLUDED

class Boolean
{
private:
    int _value;

public:
    Boolean(int x = 0);

    Boolean _AND(Boolean) const;
    Boolean _OR(Boolean) const;
    Boolean _NOT() const;

    int getValue();

    //tipo operator +/*/etc (lista de parámetros);

    Boolean operator+ (const Boolean) const;
    Boolean operator* (const Boolean) const;

};


#endif // BOOLEAN_H_INCLUDED
