// /Game/BP/Objects/World/Items/Deployables/Radar/UMG_RadarIcon_TrailBeacon.UMG_RadarIcon_TrailBeacon_C
// Derives from: UUMG_RadarIcon_C > UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x3E0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RadarIcon_TrailBeacon_C : public UUMG_RadarIcon_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Trail_Beacon_C* BeaconActor;  // 0x03D8, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_RadarIcon_TrailBeacon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void InitialiseIconWidget(FMapIconsRowHandle MapIconData, AActor* OwningActor);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ShouldDrawPathToLinkedActor(AActor*& LinkedActor);  // parameters 0x9
};
