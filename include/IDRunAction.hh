#ifndef IDRunAction_h
#define IDRunAction_h 1

#include "G4UserRunAction.hh"
#include "G4Accumulable.hh"
#include "globals.hh"

class G4Run;

/// Run action class
///
/// In EndOfRunAction(), it calculates the dose in the selected volume
/// from the energy deposit accumulated via stepping and event actions.
/// The computed dose is then printed on the screen.

class IDRunAction : public G4UserRunAction
{
  public:
    IDRunAction();
    virtual ~IDRunAction();

    // virtual G4Run* GenerateRun();
    virtual void BeginOfRunAction(const G4Run*);
    virtual void   EndOfRunAction(const G4Run*);

    void SumAlpha (G4int sum);

  private:
    G4Accumulable<G4double> fSumAlpha;
};

#endif
