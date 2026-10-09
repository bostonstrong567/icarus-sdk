// /Script/ChaosCloth.ChaosClothingSimulationInteractor
// Derives from: UClothingSimulationInteractor > UObject
// size 0xA0, declared in Engine/Plugins/Experimental/ChaosCloth/Source/Chaos/Public/ChaosCloth/ChaosClothingSimulationInteractor.h

UCLASS()
class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
{
private:
    TArray<TDelegate<void __cdecl(Chaos::FClothingSimulation *,FClothingSimulationContextCommon *),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32> > Commands;  // 0x0090, not reflected
};
