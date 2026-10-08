// /Script/Icarus.IcarusStateRecorderComponent
// Derives from: UActorComponent > UObject
// size 0xD8, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/IcarusStateRecorderComponent.h

UCLASS(Config=Engine)
class UIcarusStateRecorderComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bBeginRecordingImmediately;  // 0x00B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bRetainOnDestroy;  // 0x00B1, size 0x1
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadOnly) EStateRecorderOwnerResolvePolicy OwnerResolvePolicy;  // 0x00B2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bUsesFastActorPathNameMatching;  // 0x00B3, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bCreateMissingRecorderComponent;  // 0x00B4, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) FName ActorClassName;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, SaveGame) FString ActorPathName;  // 0x00C0, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) bool bWasMovedToSubLevel;  // 0x00D0, size 0x1
    UPROPERTY(EditAnywhere) bool bIsRecordingGameState;  // 0x00D1, size 0x1
    UPROPERTY(EditAnywhere) bool bHasRecordedValidState;  // 0x00D2, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    bool bIsRuntimeReload;  // 0x00D3, protected

    UFUNCTION(BlueprintCallable) void BeginRecording();
    UFUNCTION(BlueprintCallable) void EndRecording();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsRecording() const;  // parameters 0x1
    UFUNCTION() bool ManualRecordAndSerializeState(FStateRecorderBlob& SerializedBlob, bool bRecordState);  // parameters 0x22
    UFUNCTION() void OnResolvedOwnerEndPlay(AActor* ResolvedOwner, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION() void StitchDynamicallyCreatedRecorderComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool WasMovedToSubLevel() const;  // parameters 0x1

    // Virtual functions that start here:
    //   CheckBelongsToActor, FindOwner, GetFastActorLocation, GetLogDetails, PerformVersionUpgrades
    //   PrepareRecorderForRuntimeReload, PurgeActorsMovedToSubLevel, RecordOwnerState, RespawnOwner
    //   RestoreState, SanitizeRecorderForRuntimeReload, SetMovedToSubLevel, ShouldRetainOnDestroy
    //   StitchDynamicallyCreatedRecorderComponent, StitchingOperation, UpdateOwnerToDatabaseState
    //   UsesFastActorLocationMatching, Validate, WantsStitchingOperation, WasMovedToSubLevel
};
