#ifndef SOLVENAVIGATIONPROBLEM_H
#define SOLVENAVIGATIONPROBLEM_H
#include "../sensors/sensors.h"

class SolveNavigationProblem
{
public:
    SolveNavigationProblem();
    SolveNavigationProblem(std::vector<BaseSensor> availableSensors);
    PosVelAccelCoordinates getCurrentPosition();
};

#endif // SOLVENAVIGATIONPROBLEM_H
