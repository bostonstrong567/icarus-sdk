// /Script/Icarus.IcarusActor
// Derives from: AActor > UObject
// size 0x2C0, declared in Icarus/Source/Icarus/Actors/IcarusActor.h

UCLASS(MinimalAPI, Config=Engine)
class AIcarusActor : public AActor, public IModifiableInterface, public IMutableGameplayTagInterface, public IIcarusActorUIDInterface, public IGameplayTagAssetInterface
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Replicated, Instanced, BlueprintReadOnly) UIcarusStatContainer* StatContainer;  // 0x0240, size 0x8
    UPROPERTY(Replicated, Instanced, BlueprintReadOnly) UActorState* ActorState;  // 0x0248, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EProgressState ProgressState;  // 0x0250, size 0x1
    UPROPERTY(BlueprintAssignable) FActorPreDestroy OnActorPreDestroy;  // 0x0251, size 0x1
    UPROPERTY(BlueprintAssignable) FModifierStateUpdatedSignature OnModifierStateUpdated;  // 0x0258, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UTerrainAnchorComponent* TerrainAnchor;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UTerrainAnchorComponent> TerrainAnchorClass;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FGameplayTagContainer GameplayTags;  // 0x0280, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UIcarusStateRecorderComponent> RecorderClass;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSaveModifiersToDatabase;  // 0x02B0, size 0x1
protected:
    int32 CurrentUID;  // 0x0278, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 IcarusUID;  // 0x02A0, size 0x4
private:
    UPROPERTY(EditAnywhere, Instanced) UIcarusStateRecorderComponent* Recorder;  // 0x02B8, size 0x8
public:
    UFUNCTION(BlueprintCallable) void ClaimUniqueIcarusUIDFromLibrary(int32 SuggestedUID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void DestroyIcarusActor(EIcarusActorDestroyReason Reason);  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) void DestroyIcarusActorInternal(EIcarusActorDestroyReason Reason);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetIcarusUID() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasRecorder() const;  // parameters 0x1
    UFUNCTION(BlueprintAuthorityOnly, BlueprintNativeEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsRecorderRecording() const;  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) void OnDatabaseLoadComplete();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintNativeEvent) void OnRegisteredWithPrebuiltStructure(APrebuiltStructure* Prebuilt);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnTerrainAnchorStateChanged();
    UFUNCTION(BlueprintNativeEvent) void RaiseTheCurtain();
    UFUNCTION(BlueprintCallable) void RecorderBeginRecording() const;
    UFUNCTION(BlueprintCallable) void RecorderEndRecording() const;
    UFUNCTION(BlueprintCallable, BlueprintPure) bool RecorderWasMovedToSubLevel() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void RepairObject(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetIcarusUID(int32 ForcedUID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetRecorderShouldRetainOnDestroy(bool bShouldRetain);  // parameters 0x1

    // Virtual functions that start here:
    //   DestroyIcarusActorInternal_Implementation, IcarusBeginPlay_Implementation
    //   OnDatabaseLoadComplete_Implementation, OnTerrainAnchorStateChanged_Implementation
    //   RaiseTheCurtain_Implementation, RepairObject_Implementation
};
