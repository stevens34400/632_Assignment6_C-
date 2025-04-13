#include <iostream>
#include "StandardRide.h"
#include "PremiumRide.h"
#include "Driver.h"
#include "Rider.h"
#include <vector>

int main() {
    // Create rides
    Ride* r1 = new StandardRide("R001", "Downtown", "Airport", 10.0);
    Ride* r2 = new PremiumRide("R002", "Uptown", "Station", 5.0);
    Ride* r3 = new PremiumRide("R003", "City Center", "Mall", 8.0);

    // Store rides in polymorphic collection
    std::vector<Ride*> rides = {r1, r2, r3};
    for (Ride* ride : rides) {
        ride->rideDetails();
        std::cout << "=====\n";
    }

    // Create driver
    Driver d1("D101", "Alice", 4.9);
    d1.addRide(r1);
    d1.addRide(r3);
    d1.getDriverInfo();

    // Create rider
    Rider rider1("C301", "Bob");
    rider1.requestRide(r2);
    rider1.viewRides();

    // Clean up
    for (Ride* ride : rides) {
        delete ride;
    }

    return 0;
}
