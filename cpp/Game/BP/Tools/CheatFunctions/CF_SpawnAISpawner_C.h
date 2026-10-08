// /Game/BP/Tools/CheatFunctions/CF_SpawnAISpawner.CF_SpawnAISpawner_C
// Derives from: UCF_BaseCombo_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x310, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_SpawnAISpawner_C : public UCF_BaseCombo_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftClassPtr<AActor>> ValidClassesToSpawn;  // 0x0300, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_CF_SpawnAISpawner(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HandleExecute(UUserWidget* Widget, int32 Amount);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnLoaded_D056738D40FAA1661B99B2AC219087E4(TSubclassOf<UObject> Loaded);  // parameters 0x8
};
