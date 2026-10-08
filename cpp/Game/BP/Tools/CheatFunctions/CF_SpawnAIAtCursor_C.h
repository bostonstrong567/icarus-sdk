// /Game/BP/Tools/CheatFunctions/CF_SpawnAIAtCursor.CF_SpawnAIAtCursor_C
// Derives from: UCF_BaseComboInteger_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x318, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_SpawnAIAtCursor_C : public UCF_BaseComboInteger_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_SpawnAIAtCursor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnConstruction();
};
