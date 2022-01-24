# include "Dummy.hpp"

Dummy::Dummy(void) : 
        ATarget("Target Practice Dummy")
{}

Dummy::Dummy(std::string type) : 
        ATarget(type)
{}

Dummy::~Dummy()
{}

Dummy * Dummy::clone(void) const
{
    return (new Dummy(_type));
}
