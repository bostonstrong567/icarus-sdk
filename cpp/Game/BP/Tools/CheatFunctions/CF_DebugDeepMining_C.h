// /Game/BP/Tools/CheatFunctions/CF_DebugDeepMining.CF_DebugDeepMining_C
// Derives from: UCF_BaseButton_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x348, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_DebugDeepMining_C : public UCF_BaseButton_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FOreDepositRowHandle, int32> OreDepositMap;  // 0x02F8, size 0x50

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_DebugDeepMining(int32 EntryPoint);  // parameters 0x4
};
