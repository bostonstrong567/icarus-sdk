// /Script/Engine.PrecomputedVisibilityOverrideVolume
// Derives from: AVolume > ABrush > AActor > UObject
// size 0x288, declared in Engine/Source/Runtime/Engine/Classes/Lightmass/PrecomputedVisibilityOverrideVolume.h

UCLASS(MinimalAPI, Config=Engine)
class APrecomputedVisibilityOverrideVolume : public AVolume
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> OverrideVisibleActors;  // 0x0258, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> OverrideInvisibleActors;  // 0x0268, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> OverrideInvisibleLevels;  // 0x0278, size 0x10
};
