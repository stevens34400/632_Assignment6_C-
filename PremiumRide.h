#ifndef PREMIUMRIDE_H
#define PREMIUMRIDE_H

#include "Ride.h"

// Class representing a premium ride, inheriting from the Ride class
class PremiumRide : public Ride {
public:
    // Constructor for PremiumRide, taking ride ID, pickup location, dropoff location, and distance
    PremiumRide(std::string id, std::string pickup, std::string dropoff, double dist);
    
    // Method to calculate the fare for the premium ride
    double fare() const override;
    
    // Method to display the details of the ride
    void rideDetails() const override;
};

#endif
