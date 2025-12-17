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

double getRadius()const{
    return radius;
}

std::array<double,3> getPosition() const{
    return position;
}



};

int main(){   // Putting Simulator Part in Main for now
int const numPlanets = 2;  // Hardcoding # of planet

std::array<double,3> pos = {0, 0, 0};  // Planet 1
std::array<double,3> v = {0,0,0};
double m = pow(10,30)*2;
double r = pow(10,5);

std::array<double,3> pos1 = {pow(10,8)*7, 0, 0};  // Planet 2
std::array<double,3> v1 = {5.4,-5.4,0};
double m1 = pow(10,22);
double r1 = pow(10,7);


Planet Planet1 = Planet(pos,v,m,r);
Planet Planet2 = Planet(pos1,v1,m1,r1);
std::array <Planet, numPlanets> Moving_Bodies = {Planet1, Planet2};  // Intializing planets into an array.

for(int i = 0; i < numPlanets; i++){

}



}