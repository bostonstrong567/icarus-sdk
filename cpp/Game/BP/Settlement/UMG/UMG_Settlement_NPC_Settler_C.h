// /Game/BP/Settlement/UMG/UMG_Settlement_NPC_Settler.UMG_Settlement_NPC_Settler_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2DC, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Settlement_NPC_Settler_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* CancelButton;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* MakeGuardButton;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Background;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_NPCName;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Role;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TitleText;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ASettlement* NearestSettlement;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WantsNPC;  // 0x02C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCRolesRowHandle WorkerRole;  // 0x02C4, size 0x18

    UFUNCTION() void BndEvt__UMG_Settlement_NPC_Visitor_DenyButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Settlement_NPC_Visitor_RejectButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Settlement_NPC_Settler(int32 EntryPoint);  // parameters 0x4
};
