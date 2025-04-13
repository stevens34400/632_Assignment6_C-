#include "Ride.h"
#include <iostream>

// Constructor for the Ride class, initializing the rideID, pickupLocation, dropoffLocation, and distance
Ride::Ride(std::string id, std::string pickup, std::string dropoff, double dist)
    : rideID(id), pickupLocation(pickup), dropoffLocation(dropoff), distance(dist) {}

// Method to print the details of the ride
void Ride::rideDetails() const {
    std::cout << "Ride ID: " << rideID
              << "\nPickup: " << pickupLocation
              << "\nDropoff: " << dropoffLocation
              << "\nDistance: " << distance << " miles\n";
}
