#include "boolean.h"

Boolean::Boolean(int x) : _value(0)
{
    if(x > 0)
        _value = 1;
}

Boolean Boolean::_AND(Boolean bol) const
{
    Boolean res;

    res._value = this->_value * bol._value;

    return res;
}

Boolean Boolean::_OR(Boolean bol) const
{
    Boolean res;

    if(this->_value > 0 || bol._value > 0)
    {
        res._value = 1;
        return res;
    }

    return res;
}

Boolean Boolean::_NOT() const
{
    Boolean res;

    if(this->_value >0)
    {
        res._value = 0;
    }
    else
    {
        res._value = 1;
    }

    return res;
}

int Boolean::getValue()
{
    return this->_value;
}

//tipo  nombre_clase::operator +/* (lista de parámetros);

Boolean Boolean::operator+(Boolean bol) const
{
    Boolean res;

    if(this->_value >0 || bol._value > 0)
    {
        res._value = 1;

    }

    return res;
}

Boolean Boolean::operator*(Boolean bol) const
{
    Boolean res;

    res._value = this->_value * bol._value;

    return res;
}
