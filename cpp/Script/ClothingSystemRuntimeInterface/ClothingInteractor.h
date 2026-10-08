// /Script/ClothingSystemRuntimeInterface.ClothingInteractor
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h

UCLASS(Abstract)
class UClothingInteractor : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    int32 ClothingId;  // 0x0028, protected

    // Virtual functions that start here:
    //   Sync
};
