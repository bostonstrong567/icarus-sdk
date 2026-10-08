// /Game/BP/Player/BP_DedicatedServerEntryGameMode.BP_DedicatedServerEntryGameMode_C
// Derives from: ADedicatedServerEntryGameMode > AIcarusGameModeBase > AGameMode > AGameModeBase > AInfo > AActor > UObject
// size 0x368, a blueprint class, blueprint

UCLASS(Transient, NotPlaceable, Config=Game)
class ABP_DedicatedServerEntryGameMode_C : public ADedicatedServerEntryGameMode
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0360, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_DedicatedServerEntryGameMode(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnFailure_4D6CC50D4823536B8A4664A9EA181B00(FString ErrorReason);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnFailure_785EBDC347322850005D6497D4EABD85(FString ErrorReason);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnSuccess_4D6CC50D4823536B8A4664A9EA181B00();
    UFUNCTION(BlueprintCallable) void OnSuccess_785EBDC347322850005D6497D4EABD85();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
