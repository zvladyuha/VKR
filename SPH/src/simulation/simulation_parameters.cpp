#include <simulation/simulation_parameters.h>

SimulationParameters& SimulationParameters::getInstance()
{
    static SimulationParameters guiParamsInstance;

    static bool isInitialized = false;
    if (isInitialized)
    {
        return guiParamsInstance;
    }
    isInitialized = true;

    guiParamsInstance.g = 9.8f;
    guiParamsInstance.kernelRadius = 0.1f;
    guiParamsInstance.deltaTime = 0.016f;
    guiParamsInstance.restDensity = 1000.f;
    guiParamsInstance.relaxationParameter = 1000.f;
    guiParamsInstance.deltaQ = 0.3 * guiParamsInstance.kernelRadius;
    guiParamsInstance.correctionCoefficient = 0.001f;
    guiParamsInstance.correctionPower = 4;
    guiParamsInstance.c_XSPH = 0.01f;
    guiParamsInstance.vorticityEpsilon = 0.001f;
    guiParamsInstance.substepsNumber = 4;

    return guiParamsInstance;
}
