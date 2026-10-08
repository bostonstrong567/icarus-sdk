// /Game/BP/Tools/CheatFunctions/Templates/CF_BaseComboBool.CF_BaseComboBool_C
// Derives from: UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x308, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_BaseComboBool_C : public UCF_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCheckBox* Checkbox;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCustomComboBox* ComboBox;  // 0x02F0, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_94;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UCheckBox* NewVar_0;  // 0x0300, size 0x8

    UFUNCTION() void BndEvt__CheckBox_218_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);  // parameters 0x1
    UFUNCTION() void BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature(FString NameString, UUserWidget* Widget);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_BaseComboBool(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetCheckboxText();  // parameters 0x18
    UFUNCTION(BlueprintCallable) void HandleArg(int32 Index, FString Arg);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void HandleOnCheckboxStateChanged(UUserWidget* SelectedWidget, bool IsChecked);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void HandleOnItemSet(UUserWidget* Widget);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void UpdatePreview(const TArray<FString>& Args);  // parameters 0x10
};
