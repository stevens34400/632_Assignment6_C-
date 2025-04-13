#include "Rider.h"
#include <iostream>

// Constructor for the Rider class, initializes riderID and name
Rider::Rider(std::string id, std::string name)
    : riderID(id), name(name) {}

// Method to request a ride, adds the ride to the requestedRides list
void Rider::requestRide(Ride* ride) {
    requestedRides.push_back(ride);
}

// Method to view all requested rides, prints rider details and ride details
void Rider::viewRides() const {
    std::cout << "Rider: " << name << " (ID: " << riderID << ")\n";
    for (const auto& ride : requestedRides) {
        ride->rideDetails(); // Calls rideDetails method of each ride
        std::cout << "-----\n"; // Separator between rides
    }
}
