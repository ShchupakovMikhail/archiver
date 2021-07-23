#pragma once

#include <exception>
#include <algorithm>

#include "vector.h"
#include "pair.h"

namespace structures
{

template<class Key, class Value>
class Map
{
public:
    ////////////////////////////////////////////////////////
    explicit Map() {}

    ////////////////////////////////////////////////////////
/*    Value operator[](const Key& key) {

    }
*/

private:
    Vector<Pair<Key, Value>> data;
};

} // namespace structures