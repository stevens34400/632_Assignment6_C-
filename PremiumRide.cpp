#include "PremiumRide.h"
#include <iostream>

// Constructor for PremiumRide, initializing with id, pickup, dropoff, and distance
PremiumRide::PremiumRide(std::string id, std::string pickup, std::string dropoff, double dist)
    : Ride(id, pickup, dropoff, dist) {}

// Method to calculate the fare for a premium ride
double PremiumRide::fare() const {
    return distance * 3.0; // Premium rides cost 3 times the distance
}

// Method to display ride details
void PremiumRide::rideDetails() const {
    Ride::rideDetails(); // Call the base class method to display common ride details
    std::cout << "Type: Premium\nFare: $" << fare() << "\n"; // Display type and fare
}
