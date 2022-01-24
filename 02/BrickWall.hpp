#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

# include "ATarget.hpp"

class BrickWall : public ATarget
{
    public:
        BrickWall(void);
        BrickWall(std::string type);
        virtual ~BrickWall();
        virtual BrickWall * clone(void) const;
};

#endif
