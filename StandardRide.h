#ifndef STANDARDRIDE_H
#define STANDARDRIDE_H

#include "Ride.h"

// The StandardRide class represents a standard type of ride.
// It inherits from the Ride class and provides specific implementations
// for calculating the fare and displaying ride details.
class StandardRide : public Ride {
public:
    // Constructor for StandardRide
    // Parameters:
    // - id: A unique identifier for the ride
    // - pickup: The pickup location for the ride
    // - dropoff: The dropoff location for the ride
    // - dist: The distance of the ride
    StandardRide(std::string id, std::string pickup, std::string dropoff, double dist);

    // Calculates the fare for the standard ride.
    // Returns the fare as a double.
    double fare() const override;

    // Displays the details of the ride.
    void rideDetails() const override;
};

#endif
