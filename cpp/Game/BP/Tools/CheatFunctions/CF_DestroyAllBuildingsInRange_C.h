// /Game/BP/Tools/CheatFunctions/CF_DestroyAllBuildingsInRange.CF_DestroyAllBuildingsInRange_C
// Derives from: UCF_BaseInteger_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x318, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_DestroyAllBuildingsInRange_C : public UCF_BaseInteger_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalCount;  // 0x0308, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector PlayerLoc;  // 0x030C, size 0xC

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_DestroyAllBuildingsInRange(int32 EntryPoint);  // parameters 0x4
};
