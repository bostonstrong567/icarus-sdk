// /Game/BP/Tools/CheatFunctions/CF_SetRotation.CF_SetRotation_C
// Derives from: UCF_BaseFloat3_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x320, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_SetRotation_C : public UCF_BaseFloat3_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0318, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_SetRotation(int32 EntryPoint);  // parameters 0x4
};
