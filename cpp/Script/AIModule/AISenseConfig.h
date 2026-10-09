// /Script/AIModule.AISenseConfig
// Derives from: UObject
// size 0x48, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AISenseConfig.h

UCLASS(Abstract, EditInlineNew, Config=Game)
class UAISenseConfig : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FColor DebugColor;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxAge;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bStartsEnabled : 1;  // 0x0030, mask 0x01
    FString CachedSenseName;  // 0x0038, not reflected

    // Virtual functions that start here:
    //   GetSenseImplementation
};
