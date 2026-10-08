// /Game/BP/Objects/World/Items/Deployables/Radar/UMG_RadarIcon_PortableBeacon.UMG_RadarIcon_PortableBeacon_C
// Derives from: UUMG_RadarIcon_C > UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x3E0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RadarIcon_PortableBeacon_C : public UUMG_RadarIcon_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Portable_Beacon_C* BeaconReference;  // 0x03D8, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_RadarIcon_PortableBeacon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void InitialiseIconWidget(FMapIconsRowHandle MapIconData, AActor* OwningActor);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void OnLoaded_926E15924B62D4A1C5770F8FB270B976(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0xA8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseLeave(const FPointerEvent& MouseEvent);  // parameters 0x70
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ShouldOverrideVisibility(ESlateVisibility& ForcedVisibility);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void UpdateBeaconStyle();
};
