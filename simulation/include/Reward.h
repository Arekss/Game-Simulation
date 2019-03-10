#ifndef EXERC_BOXES_REWARD
#define EXERC_BOXES_REWARD

#include "Base.h"

template<typename T>
class Reward : public Base
{
    T gift;
public:
    bool comp(const T othr) const override;
    Reward(T x) : gift(x){};
};

#endif