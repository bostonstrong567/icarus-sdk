// /Script/Icarus.MapIconWidgetInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/UI/Map/IcarusMapIconComponent.h

UCLASS(Abstract, MinimalAPI)
class UMapIconWidgetInterface : public UInterface
{
public:
    UFUNCTION(BlueprintImplementableEvent) void InitialiseIconWidget(FMapIconsRowHandle MapIconData, AActor* OwningActor);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ShouldDrawPathToLinkedActor(AActor*& LinkedActor);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) bool ShouldOverrideVisibility(ESlateVisibility& ForcedVisibility);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ShouldOverrideWidgetLocation(FVector& Location);  // parameters 0xD
};
