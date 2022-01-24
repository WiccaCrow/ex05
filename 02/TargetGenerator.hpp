#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include <vector>
#include <algorithm>
#include "ATarget.hpp"

class TargetGenerator
{
    private:
        std::vector<ATarget*> targetbook;
        // constr/destr
        TargetGenerator(const TargetGenerator &obj);
        TargetGenerator & operator=(const TargetGenerator &obj);
    public:
        // constr/destr
        TargetGenerator(void);
        ~TargetGenerator();

        // other
        void learnTargetType(ATarget * target_obj);
        void forgetTargetType(std::string const &target);
        ATarget* createTarget(std::string const &target);
};

#endif
