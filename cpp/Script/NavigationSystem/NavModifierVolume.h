// /Script/NavigationSystem.NavModifierVolume
// Derives from: AVolume > ABrush > AActor > UObject
// size 0x270, declared in Engine/Source/Runtime/NavigationSystem/Public/NavModifierVolume.h

UCLASS(Config=Engine)
class ANavModifierVolume : public AVolume, public INavRelevantInterface
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<UNavArea> AreaClass;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere) bool bMaskFillCollisionUnderneathForNavmesh;  // 0x0268, size 0x1

    UFUNCTION(BlueprintCallable) void SetAreaClass(TSubclassOf<UNavArea> NewAreaClass);  // parameters 0x8
};
