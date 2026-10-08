// /Script/Icarus.IcarusCompassWidget
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2D8, declared in Icarus/Source/Icarus/UI/Elements/IcarusCompassWidget.h

UCLASS(EditInlineNew)
class UIcarusCompassWidget : public UUserWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* DynamicMat;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName DynamicMatParamName;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UIcarusCompassIcon*> CompassIcons;  // 0x0270, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSet<UIcarusMapIconComponent*> CompassIconComponents;  // 0x0280, size 0x50

    // Not reflected: the engine's scripting cannot see these.
    float CurrentMaterialRotation;  // 0x02D0, private

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void AddWaypointComponent(UIcarusMapIconComponent* MapIconComponent);  // parameters 0x8
    UFUNCTION() void OnMapIconVisibilityChanged(UUserWidget* Widget, UIcarusMapIconComponent* Component, bool bNewVisibility);  // parameters 0x11
    UFUNCTION() void OnMapIconsUpdated();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void RemoveWaypointComponent(UIcarusMapIconComponent* MapIconComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void RemoveWaypointWidget(UIcarusCompassIcon* CompassIcon);  // parameters 0x8
};
