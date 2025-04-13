# 632_Assignment6_C++

## Ride Sharing System

This project implements a Ride Sharing System with the following components:

1. **Ride Class**:
   - A base class `Ride` that holds core details such as `rideID`, `pickupLocation`, `dropoffLocation`, `distance`, and `fare`.
   - Methods for calculating the fare based on distance and displaying ride information.

2. **Specific Ride Subclasses**:
   - `StandardRide` and `PremiumRide` are derived from the `Ride` class.
   - Each subclass overrides the `fare()` method to calculate the fare based on ride type.
   - Demonstrates polymorphism by calling the overridden `fare()` method on a list of different ride types.

3. **Driver Class**:
   - Includes attributes like `driverID`, `name`, `rating`, and `assignedRides`.
   - Methods such as `addRide(Ride* ride)` to add rides to the driver's list and `getDriverInfo()` to display driver details.
   - Uses encapsulation to keep `assignedRides` private.

4. **Rider Class**:
   - Includes attributes like `riderID`, `name`, and `requestedRides`.
   - Methods such as `requestRide(Ride* ride)` to add a ride to the rider's requested list, and `viewRides()` to display ride history.

5. **System Functionality**:
   - Demonstrates polymorphism by storing rides of different types in a list and invoking `fare()` and `rideDetails()` polymorphically.

There is also a sample output as can be seen in RideSharingApp, feel free to check out
