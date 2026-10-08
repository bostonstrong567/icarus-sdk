// /Game/BP/Tools/CheatFunctions/CF_DestroyDeployables.CF_DestroyDeployables_C
// Derives from: UCF_BaseCombo_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x304, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_DestroyDeployables_C : public UCF_BaseCombo_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ActorCount;  // 0x0300, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_CF_DestroyDeployables(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HandleExecute(UUserWidget* Widget, int32 Amount);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnConstruction();
};
