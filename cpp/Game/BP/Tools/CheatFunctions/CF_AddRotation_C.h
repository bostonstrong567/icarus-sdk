// /Game/BP/Tools/CheatFunctions/CF_AddRotation.CF_AddRotation_C
// Derives from: UCF_BaseFloat3_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x320, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_AddRotation_C : public UCF_BaseFloat3_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0318, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_AddRotation(int32 EntryPoint);  // parameters 0x4
};
