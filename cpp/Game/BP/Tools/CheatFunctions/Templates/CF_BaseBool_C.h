// /Game/BP/Tools/CheatFunctions/Templates/CF_BaseBool.CF_BaseBool_C
// Derives from: UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2F9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_BaseBool_C : public UCF_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E0, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_107;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* UMG_IconTextButton_2;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Checked;  // 0x02F8, size 0x1

    UFUNCTION() void BndEvt__UMG_IconTextButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_BaseBool(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetCheckboxState();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetCheckboxText();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetTitleText();  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnCheckboxStateChanged(bool NewState);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Toggle();
    UFUNCTION(BlueprintCallable) void Trigger_CheckBoxStateChanged(bool NewState);  // parameters 0x1, named "Trigger CheckBoxStateChanged"
};
