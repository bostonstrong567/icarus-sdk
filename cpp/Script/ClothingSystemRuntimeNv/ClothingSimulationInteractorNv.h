// /Script/ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
// Derives from: UClothingSimulationInteractor > UObject
// size 0xA0, declared in Engine/Source/Runtime/ClothingSystemRuntimeNv/Public/ClothingSimulationInteractorNv.h

UCLASS()
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{
private:
    TArray<TDelegate<void __cdecl(FClothingSimulationNv *,FClothingSimulationContextNv *),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32> > Commands;  // 0x0090, not reflected
public:
    UFUNCTION(BlueprintCallable) void SetAnimDriveDamperStiffness(float InStiffness);  // parameters 0x4
};
