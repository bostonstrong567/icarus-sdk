// /Game/BP/Settlement/UMG/UMG_Settlement_NPC_Visitor.UMG_Settlement_NPC_Visitor_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2C9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Settlement_NPC_Visitor_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* CancelButton;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* ConfirmButton;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* RejectButton;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Background;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Capacity;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_NPCName;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TitleText;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ASettlement* NearestSettlement;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WantsNPC;  // 0x02C8, size 0x1

    UFUNCTION() void BndEvt__UMG_Settlement_NPC_Visitor_DenyButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Settlement_NPC_Visitor_RejectButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Sign_Text_Window_ConfirmButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Settlement_NPC_Visitor(int32 EntryPoint);  // parameters 0x4
};
