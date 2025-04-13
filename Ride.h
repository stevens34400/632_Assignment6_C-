#ifndef RIDE_H
#define RIDE_H

#include <string>

class Ride {
protected:
    std::string rideID;
    std::string pickupLocation;
    std::string dropoffLocation;
    double distance; // in miles

public:
    Ride(std::string id, std::string pickup, std::string dropoff, double dist);
    virtual ~Ride() = default;

    virtual double fare() const = 0;
    virtual void rideDetails() const;
};

#endif
