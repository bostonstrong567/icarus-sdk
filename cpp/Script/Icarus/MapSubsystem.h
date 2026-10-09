// /Script/Icarus.MapSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0xA0, declared in Icarus/Source/Icarus/Subsystems/UI/MapSubsystem.h

UCLASS()
class UMapSubsystem : public UWorldSubsystem
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FMapIconsUpdatedSignature OnMapIconsUpdated;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FMapIconVisibilityChanged OnMapIconVisibilityChanged;  // 0x0040, size 0x10
protected:
    UPROPERTY(BlueprintReadOnly) TMap<UUserWidget*, UIcarusMapIconComponent*> RegisteredMapIcons;  // 0x0050, size 0x50
public:
    UFUNCTION(BlueprintCallable) void DeregisterIcon(UIcarusMapIconComponent* Component);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetMapIconWidgets(TArray<UUserWidget*>& OutMapIconWidgets);  // parameters 0x10
    UFUNCTION(BlueprintCallable) bool HasRegisteredIcon(UIcarusMapIconComponent* Component);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void RegisterIcon(UIcarusMapIconComponent* Component);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool ShouldMapIconBeVisible(UIcarusMapIconComponent* MapIconComponent) const;  // parameters 0x9
    UFUNCTION() void UpdateSingleWidgetVisibility(UUserWidget*& MapWidget, UIcarusMapIconComponent* IconComponent) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdateWidgetVisibility();
};
