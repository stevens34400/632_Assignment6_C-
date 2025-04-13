#include "StandardRide.h"
#include <iostream>

// Constructor for StandardRide, initializing with id, pickup, dropoff, and distance
StandardRide::StandardRide(std::string id, std::string pickup, std::string dropoff, double dist)
    : Ride(id, pickup, dropoff, dist) {}

// Calculates the fare for a standard ride based on distance
double StandardRide::fare() const {
    return distance * 1.5; // Fare is calculated as distance multiplied by 1.5
}

// Displays the details of the ride, including type and fare
void StandardRide::rideDetails() const {
    Ride::rideDetails(); // Calls the base class method to display common ride details
    std::cout << "Type: Standard\nFare: $" << fare() << "\n"; // Outputs the type and fare
}
