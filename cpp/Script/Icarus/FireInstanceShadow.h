// /Script/Icarus.FireInstanceShadow
// Derives from: AFireInstanceBase > AIcarusActor > AActor > UObject
// size 0x320, declared in Icarus/Source/Icarus/Systems/Disaster/FireInstanceShadow.h

UCLASS(Config=Engine)
class AFireInstanceShadow : public AFireInstanceBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FBox> InstanceBoxes;  // 0x0308, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bReadyToDestroy;  // 0x0318, size 0x1
};
