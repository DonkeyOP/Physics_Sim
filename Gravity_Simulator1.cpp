//Started 12/14/25
//Gravity Simulator
#include <array>
#include <vector>
#include <cmath>
#include <iostream>
#include <cassert>


class Planet{
private:
    std::array<double, 3> position;  // Stores  x,y,z position
    std::array<double, 3> velocity; // Stores (vx,vy,vz)
    double mass; // Stores mass
    double radius;
    const double G = 6.6743 * pow(10,-11);
public:


Planet(std::array<double,3> pos, std::array<double,3> v, double m, double r) : 
position(pos),velocity(v), mass(m), radius(r) {}
   
double getMass() const{
    return mass;
}

double oribtal_gravity(){
    double gravity = ((G * mass) / (pow(radius,2)));
}




};
