// /Game/BP/Tools/CheatFunctions/Templates/CF_BaseInteger.CF_BaseInteger_C
// Derives from: UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2FD, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_BaseInteger_C : public UCF_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpinBox* Integer;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* UMG_IconTextButton_1;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Number;  // 0x02F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Percentage;  // 0x02FC, size 0x1

    UFUNCTION() void BndEvt__Integer_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x5
    UFUNCTION() void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_CF_BaseInteger(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetIntegerValue();  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void UpdatePreview(const TArray<FString>& Args);  // parameters 0x10
};
