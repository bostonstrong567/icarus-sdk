// /Game/BP/Tools/CheatFunctions/CF_BlockDynamicSpawn.CF_BlockDynamicSpawn_C
// Derives from: UCF_BaseComboBool_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x310, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_BlockDynamicSpawn_C : public UCF_BaseComboBool_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0308, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_CF_BlockDynamicSpawn(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HandleOnCheckboxStateChanged(UUserWidget* SelectedWidget, bool IsChecked);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void HandleOnItemSet(UUserWidget* Widget);  // parameters 0x8
};
