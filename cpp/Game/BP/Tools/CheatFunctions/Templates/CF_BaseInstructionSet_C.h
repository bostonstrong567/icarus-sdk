// /Game/BP/Tools/CheatFunctions/Templates/CF_BaseInstructionSet.CF_BaseInstructionSet_C
// Derives from: UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x320, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_BaseInstructionSet_C : public UCF_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* InstructionBox;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* UMG_IconTextButton_1;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FString> Instructions;  // 0x02F8, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UCheatOverlayBase* Overlay;  // 0x0308, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FString> RawInstructions;  // 0x0310, size 0x10

    UFUNCTION() void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_BaseInstructionSet(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Set_Instructions(const TArray<FString>& Instructions);  // parameters 0x10, named "Set Instructions"
    UFUNCTION(BlueprintCallable) void UpdateArgs(TArray<FString>& InArguments);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void UpdatePreview(const TArray<FString>& Args);  // parameters 0x10
};
