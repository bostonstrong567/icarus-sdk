// /Game/BP/Tools/CheatFunctions/Templates/CF_BaseFloat3.CF_BaseFloat3_C
// Derives from: UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x314, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_BaseFloat3_C : public UCF_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpinBox* Integer;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpinBox* Integer_1;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpinBox* Integer_2;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* UMG_IconTextButton_1;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Vector;  // 0x0308, size 0xC

    UFUNCTION() void BndEvt__Integer_1_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x5
    UFUNCTION() void BndEvt__Integer_2_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x5
    UFUNCTION() void BndEvt__Integer_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x5
    UFUNCTION() void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_CF_BaseFloat3(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void UpdatePreview(const TArray<FString>& Args);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdatePreviewImpl(TArray<FString>& Array);  // parameters 0x10
};
