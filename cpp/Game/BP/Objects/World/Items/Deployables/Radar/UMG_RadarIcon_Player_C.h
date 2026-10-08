// /Game/BP/Objects/World/Items/Deployables/Radar/UMG_RadarIcon_Player.UMG_RadarIcon_Player_C
// Derives from: UUMG_RadarIcon_C > UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x3E0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RadarIcon_Player_C : public UUMG_RadarIcon_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerState_C* PlayerState;  // 0x03D8, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_RadarIcon_Player(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void InitialiseIconWidget(FMapIconsRowHandle MapIconData, AActor* OwningActor);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void InitialiseIconWithPlayerData();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ShouldOverrideVisibility(ESlateVisibility& ForcedVisibility);  // parameters 0x2
};
