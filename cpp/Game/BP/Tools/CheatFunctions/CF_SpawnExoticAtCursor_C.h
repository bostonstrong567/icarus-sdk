// /Game/BP/Tools/CheatFunctions/CF_SpawnExoticAtCursor.CF_SpawnExoticAtCursor_C
// Derives from: UCF_BaseCombo_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x310, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_SpawnExoticAtCursor_C : public UCF_BaseCombo_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftClassPtr<AActor>> ValidClassesToSpawn;  // 0x0300, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_CF_SpawnExoticAtCursor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HandleExecute(UUserWidget* Widget, int32 Amount);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnLoaded_C932FF1E4346885E4EA308A8CE89DD58(TSubclassOf<UObject> Loaded);  // parameters 0x8
};
