// /Game/BP/Settlement/UMG/UMG_Settlement_Building.UMG_Settlement_Building_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2A8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Settlement_Building_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* CloseButton;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* DeconstructButton;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TitleText;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ASettlementBuilding* Building;  // 0x02A0, size 0x8

    UFUNCTION() void BndEvt__UMG_Settlement_Building_DeconstructButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Settlement_NPC_Visitor_DenyButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void DoNothing();
    UFUNCTION() void ExecuteUbergraph_UMG_Settlement_Building(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PerformDeconstruct();
};
