// /Game/BP/Tools/CheatFunctions/CF_DebugPlayerTracker.CF_DebugPlayerTracker_C
// Derives from: UCF_BaseButton_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x320, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_DebugPlayerTracker_C : public UCF_BaseButton_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UUserWidget> PlayerTrackerClass;  // 0x02F8, size 0x28

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_DebugPlayerTracker(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLoaded_93C6CF1F4DFDAC01C83D819E2D247DD3(TSubclassOf<UObject> Loaded);  // parameters 0x8
};
