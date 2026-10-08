// /Game/BP/Tools/CheatFunctions/CF_ExhaustPlantExotics.CF_ExhaustPlantExotics_C
// Derives from: UCF_BaseButton_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2F8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_ExhaustPlantExotics_C : public UCF_BaseButton_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02F0, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_ExhaustPlantExotics(int32 EntryPoint);  // parameters 0x4
};
