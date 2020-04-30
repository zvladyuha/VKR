#pragma once

#include <GLFW/glfw3.h>
#include <simulation/position_based_fluid_simulator.h>
#include <simulation/particles_cube.h>
#include <rendering/renderer.h>

class ParticleSystem
{
public:
    ParticleSystem();
    ~ParticleSystem();

    void InitializeParticles();
    void PerformSimulationStep();

    GLuint GetPositionsForRenderingHandle() const;
    GLuint GetIndicesHandle() const { return m_particleIndices; }
    int GetParticleNumber() const { return m_particlesNumber; }
    float3 GetUpperLimit() const { return m_upperBoundary; }
    float3 GetLowerLimit() const { return m_lowerBoundary; }

private:
    GLuint m_positions1;
    GLuint m_positions2;
    GLuint m_velocities1;
    GLuint m_velocities2;
    GLuint m_particleIndices;
    int m_particlesNumber;
    bool m_isSecondParticlesUsedForRendering = false;

    ParticlesCube* m_source;
    PositionBasedFluidSimulator* m_simulator;

    float3 m_upperBoundary;
    float3 m_lowerBoundary;
};

