// /Game/BP/Tools/CheatFunctions/Templates/CF_BaseCombo2.CF_BaseCombo2_C
// Derives from: UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x300, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_BaseCombo2_C : public UCF_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCustomComboBox* ComboBox1;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCustomComboBox* ComboBox2;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* UMG_IconTextButton;  // 0x02F8, size 0x8

    UFUNCTION() void BndEvt__ComboBox2_K2Node_ComponentBoundEvent_2_OnItemSet__DelegateSignature(FString NameString, UUserWidget* Widget);  // parameters 0x18
    UFUNCTION() void BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature(FString NameString, UUserWidget* Widget);  // parameters 0x18
    UFUNCTION() void BndEvt__UMG_IconTextButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_BaseCombo2(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Handle_On_Item_Set(UUserWidget* Widget, bool Combo2);  // parameters 0x9, named "Handle On Item Set"
    UFUNCTION(BlueprintCallable) void HandleArg(int32 Index, FString Arg);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void HandleExecute(UUserWidget* Widget1, UUserWidget* Widget2);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void UpdatePreview(const TArray<FString>& Args);  // parameters 0x10
};
