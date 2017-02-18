#ifndef __CITY_H__
#define __CITY_H__

#include <string> //std::string

class City
{
    private:
        float x;
        float y;
        
    public:
        City();
        City(float x, float y);
        
        bool operator==(const City &rhs) const;
        float get_x() const;
        float get_y() const;
        float distance_to(City city) const;
        std::string str() const;
};

#endif
