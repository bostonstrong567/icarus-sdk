// /Game/BP/Settlement/UMG/UMG_Settlement_EventDecision.UMG_Settlement_EventDecision_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2F8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Settlement_EventDecision_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_CostItems;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_GainItems;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_210;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* SelectButton;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Description;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TitleText;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VerticalBox_CostModifiers;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VerticalBox_Gain;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VerticalBox_GainModifiers;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VerticalBox_Lose;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementEventsRowHandle SettlementEvent;  // 0x02C0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EventDecisionIndex;  // 0x02D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FDecisionMade DecisionMade;  // 0x02E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ASettlement* Settlement;  // 0x02F0, size 0x8

    UFUNCTION() void BndEvt__UMG_Settlement_Building_DeconstructButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void DecisionMade__DelegateSignature(int32 DecisionIndex);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_UMG_Settlement_EventDecision(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateButtonEnabledState();
};
