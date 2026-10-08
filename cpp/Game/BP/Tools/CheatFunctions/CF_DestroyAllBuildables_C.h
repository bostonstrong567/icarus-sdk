// /Game/BP/Tools/CheatFunctions/CF_DestroyAllBuildables.CF_DestroyAllBuildables_C
// Derives from: UCF_BaseButton_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2FC, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_DestroyAllBuildables_C : public UCF_BaseButton_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalCount;  // 0x02F8, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_DestroyAllBuildables(int32 EntryPoint);  // parameters 0x4
};
