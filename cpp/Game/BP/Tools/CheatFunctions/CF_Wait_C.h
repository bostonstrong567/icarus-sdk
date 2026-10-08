// /Game/BP/Tools/CheatFunctions/CF_Wait.CF_Wait_C
// Derives from: UCF_BaseInteger_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x308, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_Wait_C : public UCF_BaseInteger_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0300, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_Wait(int32 EntryPoint);  // parameters 0x4
};
