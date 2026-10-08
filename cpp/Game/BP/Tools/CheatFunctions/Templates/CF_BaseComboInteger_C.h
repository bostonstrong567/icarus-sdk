// /Game/BP/Tools/CheatFunctions/Templates/CF_BaseComboInteger.CF_BaseComboInteger_C
// Derives from: UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x30C, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_BaseComboInteger_C : public UCF_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCustomComboBox* ComboBox;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpinBox* Count;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* UMG_IconTextButton;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Number;  // 0x0300, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinCountValue;  // 0x0304, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxCountValue;  // 0x0308, size 0x4

    UFUNCTION() void BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature(FString NameString, UUserWidget* Widget);  // parameters 0x18
    UFUNCTION() void BndEvt__Count_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x5
    UFUNCTION() void BndEvt__UMG_IconTextButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanModifyNumber();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_BaseComboInteger(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetNumber();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Handle_Execute(UUserWidget* Widget, int32 Amount);  // parameters 0xC, named "Handle Execute"
    UFUNCTION(BlueprintCallable) void Handle_On_Item_Set(UUserWidget* Widget);  // parameters 0x8, named "Handle On Item Set"
    UFUNCTION(BlueprintCallable) void HandleArg(int32 Index, FString Arg);  // parameters 0x18
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void UpdatePreview(const TArray<FString>& Args);  // parameters 0x10
};
