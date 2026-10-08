// /Script/Engine.CullDistanceVolume
// Derives from: AVolume > ABrush > AActor > UObject
// size 0x270, declared in Engine/Source/Runtime/Engine/Classes/Engine/CullDistanceVolume.h

UCLASS(MinimalAPI, Config=Engine)
class ACullDistanceVolume : public AVolume
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FCullDistanceSizePair> CullDistances;  // 0x0258, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bEnabled : 1;  // 0x0268, mask 0x01
};
