#pragma once
#include <vector>
#include "../modes/Mode.h"

namespace components
{

class Modes
{
public:
    Modes();
    ~Modes();
private:
    std::vector<modes::Mode *> items;
};

} // namespace components