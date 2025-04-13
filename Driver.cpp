#include "Driver.h"
#include <iostream>

// Constructor for the Driver class, initializing the driverID, name, and rating
Driver::Driver(std::string id, std::string name, double rating)
    : driverID(id), name(name), rating(rating) {}

// Method to add a ride to the driver's list of assigned rides
void Driver::addRide(Ride* ride) {
    assignedRides.push_back(ride);
}

// Method to print the driver's information and details of all assigned rides
void Driver::getDriverInfo() const {
    std::cout << "Driver: " << name << " (ID: " << driverID << ", Rating: " << rating << ")\n";
    // Iterate over each ride and print its details
    for (const auto& ride : assignedRides) {
        ride->rideDetails(); // Call the rideDetails method of the Ride class
        std::cout << "-----\n"; // Separator between ride details
    }
}
