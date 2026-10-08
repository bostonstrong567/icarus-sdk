// /Game/BP/Tools/CheatFunctions/Templates/CF_AutomationInstructionSet.CF_AutomationInstructionSet_C
// Derives from: UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x340, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_AutomationInstructionSet_C : public UCF_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* InstructionBox;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* UMG_IconTextButton_1;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FString> Instructions;  // 0x02F8, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UCheatOverlayBase* Overlay;  // 0x0308, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) TSoftObjectPtr<UUMG_CheatFunctionBorder_C> ParentBorder_0;  // 0x0310, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ScriptName;  // 0x0338, size 0x8

    UFUNCTION() void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_AutomationInstructionSet(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Set_Instructions(const TArray<FString>& Instructions);  // parameters 0x10, named "Set Instructions"
};
