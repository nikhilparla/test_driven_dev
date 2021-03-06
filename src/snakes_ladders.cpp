#include <map>
#include <cstdint>

// #include "catch.hpp"

struct Portal{
    enum class Type {Snake, Ladder};
    Type type;
    uint32_t target;    // no negative cells
};

/**
 * snakes and ladders board with 100 cells
 * you have normal cells where you just pass by
 * you have portals which have either a snake or ladder
 * the traget of portal is where you land from there
*/

std::map<uint32_t, Portal> portals = 
{
    { 2, { Portal::Type::Ladder, 38 } },
    { 4, { Portal::Type::Ladder, 14 } },
    { 8, { Portal::Type::Ladder, 31 } },
    { 21, { Portal::Type::Ladder, 42 } },
    { 28, { Portal::Type::Ladder, 84 } },
    { 36, { Portal::Type::Ladder, 44 } },
    { 47, { Portal::Type::Snake, 26 } },
    { 49, { Portal::Type::Snake, 11 } },
    { 51, { Portal::Type::Ladder, 67 } },
    { 56, { Portal::Type::Snake, 53 } },
    { 62, { Portal::Type::Snake, 18 } },
    { 64, { Portal::Type::Snake, 68 } },
    { 71, { Portal::Type::Ladder, 91 } },
    { 88, { Portal::Type::Ladder, 100 } },
    { 87, { Portal::Type::Snake, 24 } },
    { 93, { Portal::Type::Snake, 73 } },
    { 95, { Portal::Type::Snake, 75 } },
    { 98, { Portal::Type::Snake, 78 } },
};