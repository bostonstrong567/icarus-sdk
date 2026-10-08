// /Game/BP/Tools/CheatFunctions/CF_DebugActorCounts.CF_DebugActorCounts_C
// Derives from: UCF_BaseButton_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x314, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_DebugActorCounts_C : public UCF_BaseButton_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalCount;  // 0x02F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalCount_0;  // 0x02FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalCount_1;  // 0x0300, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalCount_2;  // 0x0304, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalCount_3;  // 0x0308, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalCount_4;  // 0x030C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalCount_5;  // 0x0310, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_DebugActorCounts(int32 EntryPoint);  // parameters 0x4
};
