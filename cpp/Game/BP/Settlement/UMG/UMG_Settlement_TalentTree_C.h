// /Game/BP/Settlement/UMG/UMG_Settlement_TalentTree.UMG_Settlement_TalentTree_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x308, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Settlement_TalentTree_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* CloseButton;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_75;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_118;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UListView* ListView_BuildingLedger;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* TalentMenuSlot;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_BuildingName;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_BuildingName_1;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Status;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TitleText;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* UMG_ButtonIcon;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* WidgetSwitcher_Settlement;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ASettlement* NearestSettlement;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NewVar_0;  // 0x02F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UBP_SettlementLedger_Data_C*> ListDataObjects;  // 0x02F8, size 0x10

    UFUNCTION() void BndEvt__UMG_Settlement_NPC_Visitor_DenyButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Settlement_TalentTree_UMG_ButtonIcon_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Settlement_TalentTree(int32 EntryPoint);  // parameters 0x4
};
