#ifndef OPERACIONES_H
#define OPERACIONES_H

template<typename T, typename U>
auto suma_simple(T lhs, U rhs) ->decltype(lhs+rhs)
{
    return lhs + rhs;
}
#endif