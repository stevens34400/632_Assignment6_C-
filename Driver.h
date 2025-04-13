#ifndef DRIVER_H
#define DRIVER_H

#include "Ride.h"  // Include the Ride class definition
#include <string>  // Include the string library for using std::string
#include <vector>  // Include the vector library for using std::vector

// Class representing a Driver
class Driver {
private:
    std::string driverID;  // Unique identifier for the driver
    std::string name;      // Name of the driver
    double rating;         // Rating of the driver
    std::vector<Ride*> assignedRides;  // List of rides assigned to the driver

public:
    // Constructor to initialize a Driver object with an ID, name, and rating
    Driver(std::string id, std::string name, double rating);

    // Method to add a ride to the driver's list of assigned rides
    void addRide(Ride* ride);

    // Method to print the driver's information
    void getDriverInfo() const;
};

#endif
