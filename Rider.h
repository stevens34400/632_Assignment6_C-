#ifndef RIDER_H
#define RIDER_H

#include "Ride.h"
#include <string>
#include <vector>

class Rider {
private:
    std::string riderID;
    std::string name;
    std::vector<Ride*> requestedRides;

public:
    Rider(std::string id, std::string name);
    void requestRide(Ride* ride);
    void viewRides() const;
};

#endif
