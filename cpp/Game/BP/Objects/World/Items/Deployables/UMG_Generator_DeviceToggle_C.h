// /Game/BP/Objects/World/Items/Deployables/UMG_Generator_DeviceToggle.UMG_Generator_DeviceToggle_C
// Derives from: UUMG_Generator_C > UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x308, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Generator_DeviceToggle_C : public UUMG_Generator_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0300, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_Generator_DeviceToggle(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
