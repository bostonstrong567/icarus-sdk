// /Game/BP/Tools/CheatFunctions/CF_TimeOfDay.CF_TimeOfDay_C
// Derives from: UCF_BaseFloat_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x30C, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_TimeOfDay_C : public UCF_BaseFloat_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NewTime;  // 0x0308, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_TimeOfDay(int32 EntryPoint);  // parameters 0x4
};
