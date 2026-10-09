// /Script/Icarus.FlammableTargetIgnite
// size 0x30, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/FlammableComponent.generated.h

USTRUCT()
struct FFlammableTargetIgnite : public FFlammableTarget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DesiredTemperatureValue;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bFromPropagation;  // 0x002C, size 0x1
};
