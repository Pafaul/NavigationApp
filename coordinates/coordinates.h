#ifndef COORDINATES_H
#define COORDINATES_H

#include <vector>
#include <string>

enum PositionSystem {GeographicCS, geocentricCS, CartesianCS};

class PosVelAccelCoordinates
{
protected:
    //x,y,z, vx,vy,vz, ax,ay,az, q,u,w, vq,vu,vw, aq,au,aw
    //положения, скорости, ускорения, углы, угловые скорости, угловые ускорения
    std::vector<bool> availableCoordinates;
    std::vector<double> currentCoordinates;
    PositionSystem posSystem;
public:
    PosVelAccelCoordinates();
    PosVelAccelCoordinates(PositionSystem posSystem);

    std::vector<double> getCurrentCoords();
    std::vector<bool> getAvailableCoords();

    std::vector<double> getPosition();
    std::vector<double> getVelocities();
    std::vector<double> getAccelerations();

    std::vector<double> getAngles();
    std::vector<double> getAngleSpeed();
    std::vector<double> getAngleAccelerations();

    void setPosition(std::vector<double> pos);
    void setPosition(double x, double y, double z);

    void setVelocity(std::vector<double> velocities);
    void setVelocity(double vx, double vy, double vz);

    void setAccelerations(std::vector<double> accel);
    void setAccelerations(double ax, double ay, double az);

    void setAngles(std::vector<double> angles);
    void setAngles(double q, double u, double w);

    void setAngleSpeed(std::vector<double> angleSpeed);
    void setAngleSpeed(double vq, double vu, double vw);

    void setAngleAcceleration(std::vector<double> angleAcceleration);
    void setAngleAcceleration(double aq, double au, double aw);

    void setAvailableCoords(std::vector<bool> availableCoords);
    PosVelAccelCoordinates convertToCoordinateSystem(PositionSystem posSystem);
};


#endif // COORDINATES_H
