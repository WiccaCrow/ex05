#include "TargetGenerator.hpp"

// constr/destr
TargetGenerator::TargetGenerator(void)
{}

TargetGenerator::~TargetGenerator()
{
    std::vector<ATarget*>::iterator iter;

    for (iter = targetbook.begin(); iter != targetbook.end() ; iter++)
            delete *iter;
    targetbook.clear();    
}

// constr/destr
TargetGenerator::TargetGenerator(const TargetGenerator &obj)
{
    operator=(obj);
}

TargetGenerator & TargetGenerator::operator=(const TargetGenerator &obj)
{
    if (this != &obj)
    {
        targetbook = obj.targetbook;
    }
    return (*this);
}

// other
void TargetGenerator::learnTargetType(ATarget * target_obj)
{
    std::vector<ATarget*>::iterator iter;

    for (iter = targetbook.begin();
            iter != targetbook.end()
            && (*iter)->getType() != target_obj->getType();
                iter++)
    {}
    if (iter == targetbook.end())
        targetbook.push_back(target_obj->clone());
    else
    {
        delete *iter;
        *iter = target_obj->clone();
    }
}

void TargetGenerator::forgetTargetType(std::string const &target)
{
    std::vector<ATarget*>::iterator iter;

    for (iter = targetbook.begin();
            iter != targetbook.end() ;
                iter++)
    {
        if ((*iter)->getType() == target)
        {
            delete *iter;
            targetbook.erase(iter);
            break ;
        }
    }
}

ATarget* TargetGenerator::createTarget(std::string const &target)
{
    std::vector<ATarget*>::iterator iter;

    for (iter = targetbook.begin();
            iter != targetbook.end() ;
                iter++)
        if ((*iter)->getType() == target)
            return ((*iter)->clone());
    return (0);
}
