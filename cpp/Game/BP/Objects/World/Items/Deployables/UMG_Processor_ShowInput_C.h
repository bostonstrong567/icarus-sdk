// /Game/BP/Objects/World/Items/Deployables/UMG_Processor_ShowInput.UMG_Processor_ShowInput_C
// Derives from: UUMG_Processor_C > UUMG_ProcessorBase_C > UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x4F0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Processor_ShowInput_C : public UUMG_Processor_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04E8, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Processor_ShowInput(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
