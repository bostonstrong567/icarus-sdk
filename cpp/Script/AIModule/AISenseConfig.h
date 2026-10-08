// /Script/AIModule.AISenseConfig
// Derives from: UObject
// size 0x48, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AISenseConfig.h

UCLASS(Abstract, EditInlineNew, Config=Game)
class UAISenseConfig : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FColor DebugColor;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxAge;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bStartsEnabled : 1;  // 0x0030, mask 0x01

    // Not reflected: the engine's scripting cannot see these.
    FString CachedSenseName;  // 0x0038, protected

    // Virtual functions that start here:
    //   GetSenseImplementation
};
