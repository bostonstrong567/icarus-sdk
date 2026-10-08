// /Game/BP/Tools/CheatFunctions/CF_FLODTileDebugInstances.CF_FLODTileDebugInstances_C
// Derives from: UCF_BaseBool_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x308, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_FLODTileDebugInstances_C : public UCF_BaseBool_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0300, size 0x8

    UFUNCTION() void ExecuteUbergraph_CF_FLODTileDebugInstances(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetCheckboxState();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnCheckboxStateChanged(bool NewState);  // parameters 0x1
};
