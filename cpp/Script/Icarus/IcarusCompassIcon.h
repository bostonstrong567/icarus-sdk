// /Script/Icarus.IcarusCompassIcon
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x328, declared in Icarus/Source/Icarus/UI/IcarusCompassIcon.h

UCLASS(EditInlineNew)
class UIcarusCompassIcon : public UUserWidget
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UIcarusMapIconComponent* LinkedMapIcon;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FadeOutOverDistance;  // 0x0268, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMapIconsData CachedMapIconData;  // 0x0270, size 0xB8

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) float GetMaxCompassDisplayDistance() const;  // parameters 0x4
};
