#include "Reward.h"

template <class T>
bool Reward<T>::comp(const T othr) const
{
    return othr == gift;
}
template class Reward<int>;
template class Reward<std::string>;
