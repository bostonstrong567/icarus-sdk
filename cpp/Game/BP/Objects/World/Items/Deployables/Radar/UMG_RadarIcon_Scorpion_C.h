// /Game/BP/Objects/World/Items/Deployables/Radar/UMG_RadarIcon_Scorpion.UMG_RadarIcon_Scorpion_C
// Derives from: UUMG_RadarIcon_C > UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x3D8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RadarIcon_Scorpion_C : public UUMG_RadarIcon_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_RadarIcon_Scorpion(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void InitialiseIconWidget(FMapIconsRowHandle MapIconData, AActor* OwningActor);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ShouldOverrideWidgetLocation(FVector& Location);  // parameters 0xD
};
