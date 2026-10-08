// /Game/BP/Tools/CheatFunctions/CF_SetAccountFlag.CF_SetAccountFlag_C
// Derives from: UCF_BaseComboBoolExec_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x310, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_SetAccountFlag_C : public UCF_BaseComboBoolExec_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0308, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_SetAccountFlag(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAllAccountFlagRowHandles(TArray<FAccountFlagsRowHandle>& Rows);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void HandleOnItemSet(UUserWidget* Widget);  // parameters 0x8
};
