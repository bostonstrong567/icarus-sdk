// /Game/BP/Tools/CheatFunctions/CF_ToggleMetaTeleport.CF_ToggleMetaTeleport_C
// Derives from: UCF_BaseButton_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x328, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_ToggleMetaTeleport_C : public UCF_BaseButton_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Spawn;  // 0x02F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AActor> MetaDepositSoftClass;  // 0x0300, size 0x28

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_ToggleMetaTeleport(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLoaded_5DC9A3934F59D45C92931986C319EDAB(TSubclassOf<UObject> Loaded);  // parameters 0x8
};
