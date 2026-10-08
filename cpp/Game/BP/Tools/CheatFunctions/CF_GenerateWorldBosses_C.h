// /Game/BP/Tools/CheatFunctions/CF_GenerateWorldBosses.CF_GenerateWorldBosses_C
// Derives from: UCF_BaseCombo_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x300, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_GenerateWorldBosses_C : public UCF_BaseCombo_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02F8, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_CF_GenerateWorldBosses(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HandleExecute(UUserWidget* Widget, int32 Amount);  // parameters 0xC
};
