// /Game/BP/Objects/World/Items/Deployables/Radar/UMG_RadarIcon_Mount.UMG_RadarIcon_Mount_C
// Derives from: UUMG_RadarIcon_C > UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x3D8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RadarIcon_Mount_C : public UUMG_RadarIcon_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_RadarIcon_Mount(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetHoverTooltipText(FText& Hover_Name) const;  // parameters 0x18
};
