#ifndef DUMMY_HPP
# define DUMMY_HPP

# include "ATarget.hpp"

class Dummy : public ATarget
{
    public:
        Dummy(void);
        Dummy(std::string type);
        virtual ~Dummy();
        virtual Dummy * clone(void) const;
};

#endif
