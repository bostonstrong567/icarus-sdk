// /Game/BP/Tools/CheatFunctions/CF_DamageArmour.CF_DamageArmour_C
// Derives from: UCF_BaseInteger_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x308, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_DamageArmour_C : public UCF_BaseInteger_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0300, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_DamageArmour(int32 EntryPoint);  // parameters 0x4
};
