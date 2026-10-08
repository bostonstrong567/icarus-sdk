// /Game/BP/Settlement/UMG/UMG_Settlement_Claim.UMG_Settlement_Claim_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2C8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Settlement_Claim_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* ConfirmButton;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableTextBox* EditableTextBox;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TitleText;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_TextSettingOption_C* UMG_ToggleButton_1;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_TextSettingOption_C* UMG_ToggleButton_2;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxCharacters;  // 0x02B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString TempString;  // 0x02B8, size 0x10

    UFUNCTION() void BndEvt__UMG_Beacon_Customisation_EditableTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);  // parameters 0x18
    UFUNCTION() void BndEvt__UMG_Sign_Text_Window_ConfirmButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Settlement_Claim(int32 EntryPoint);  // parameters 0x4
};
