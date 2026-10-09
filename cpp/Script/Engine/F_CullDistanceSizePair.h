// /Script/Engine.CullDistanceSizePair
// size 0x8, declared in Engine/Source/Runtime/Engine/Classes/Engine/CullDistanceVolume.h

USTRUCT()
struct FCullDistanceSizePair
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Size;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CullDistance;  // 0x0004, size 0x4
};
