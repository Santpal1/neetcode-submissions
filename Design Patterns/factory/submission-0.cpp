class Vehicle {
public:
    virtual string getType() = 0;
};

class Car : public Vehicle {
public:
    string getType() override {
        return "Car";
    }
};

class Bike : public Vehicle {
public:
    string getType() override {
        return "Bike";
    }
};

class Truck : public Vehicle {
public:
    string getType() override {
        return "Truck";
    }
};

class VehicleFactory {
public:
    virtual Vehicle* createVehicle() = 0;
};

class CarFactory : public VehicleFactory {
    // Write your code here
    Vehicle* createVehicle() override{
        Car* c = new Car();
        return c;
    }
};

class BikeFactory : public VehicleFactory {
    // Write your code here
    Vehicle* createVehicle() override{
        Bike* b = new Bike();
        return b;
    }
};

class TruckFactory : public VehicleFactory {
    // Write your code here
    Vehicle* createVehicle() override{
        Truck* t = new Truck();
        return t;
    }
};
