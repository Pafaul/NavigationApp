#ifndef BASESENSOR_H
#define BASESENSOR_H
#include <vector>
#include "../coordinates/coordinates.h"

class BaseSensor
{
protected:
    std::vector<bool> availableCoords;
    bool sensorOK;
public:
    BaseSensor();
    BaseSensor(std::vector<bool> sensorSetup);

    bool isSensorOK();

    std::pair<std::vector<double>, std::vector<bool>> getNextSensorReading(double time);
    std::vector<bool> getAvailableSensorCoordinates();

    std::vector<bool> positionAvailable();
    std::vector<bool> velocitiesAvailable();
    std::vector<bool> accelerationAvailable();

    std::vector<bool> anglesAvailabe();
    std::vector<bool> angleSpeedAvailable();
    std::vector<bool> angleAccelerationAvailable();
};

class FakeSensor : public BaseSensor
{
public:
    FakeSensor();
    FakeSensor(std::vector<bool> sensorSetup);

    void setEndPoint(PosVelAccelCoordinates pos);

    void breakSensor();
    void repairSenesor();
};

#endif // BASESENSOR_H
