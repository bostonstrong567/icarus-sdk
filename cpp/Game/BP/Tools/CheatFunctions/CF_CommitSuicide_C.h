// /Game/BP/Tools/CheatFunctions/CF_CommitSuicide.CF_CommitSuicide_C
// Derives from: UCF_BaseButton_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2F9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_CommitSuicide_C : public UCF_BaseButton_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseAltDescription;  // 0x02F8, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_CommitSuicide(int32 EntryPoint);  // parameters 0x4
};
