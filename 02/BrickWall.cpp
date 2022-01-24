#include "BrickWall.hpp"

BrickWall::BrickWall(void) : 
        ATarget("Inconspicuous Red-brick Wall")
{}

BrickWall::BrickWall(std::string type) : 
        ATarget(type)
{}

BrickWall::~BrickWall()
{}

BrickWall * BrickWall::clone(void) const
{
    return (new BrickWall(_type));
}
