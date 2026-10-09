// /Script/Icarus.RadioactiveInstance
// size 0x10, declared in Icarus/Source/Icarus/Radiation/RadiationManager.h

USTRUCT()
struct FRadioactiveInstance
{
public:
    UPROPERTY(BlueprintReadOnly) AActor* Emitter;  // 0x0000, size 0x8
    UPROPERTY(BlueprintReadOnly) float Distance;  // 0x0008, size 0x4
};
