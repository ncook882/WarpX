#ifndef WARPX_PhysicalParticleContainer_H_
#define WARPX_PhysicalParticleContainer_H_

#include <map>

#include <WarpXParticleContainer.H>

class PhysicalParticleContainer
    : public WarpXParticleContainer
{
public:
    PhysicalParticleContainer (amrex::AmrCore* amr_core, int ispecies);
    virtual ~PhysicalParticleContainer () {}

    virtual void AllocData () override;

    virtual void InitData () override;

    virtual void Evolve (int lev,
			 const amrex::MultiFab& Ex, const amrex::MultiFab& Ey, const amrex::MultiFab& Ez,
			 const amrex::MultiFab& Bx, const amrex::MultiFab& By, const amrex::MultiFab& Bz,
			 amrex::MultiFab& jx, amrex::MultiFab& jy, amrex::MultiFab& jz, amrex::Real t, amrex::Real dt) override;

    virtual void PostRestart () override {}
};

#endif