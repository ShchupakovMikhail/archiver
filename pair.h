#pragma once

namespace structures
{

template<class First, class Second>
struct Pair
{
    ////////////////////////////////////////////////////////
    Pair() {}

    ////////////////////////////////////////////////////////
    explicit Pair(const First& f, const Second& s)
        : first(f)
        , second(s)
    {}

    ////////////////////////////////////////////////////////
    First first;
    Second second;
};

} // namespace structures