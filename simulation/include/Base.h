#ifndef EXERC_BOXES_M_H
#define EXERC_BOXES_M_H

#include <string>
class Base {
public:
    virtual bool comp(const int) const { return false; }
    virtual bool comp(const std::string) const { return false; }
};

#endif //EXERC_BOXES_M_H
