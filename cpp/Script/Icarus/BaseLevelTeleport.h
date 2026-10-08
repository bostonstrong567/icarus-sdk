// /Script/Icarus.BaseLevelTeleport
// Derives from: AIcarusActor > AActor > UObject
// size 0x3C0, declared in Icarus/Source/Icarus/World/InstancedLevels/BaseLevelTeleport.h

UCLASS(Config=Engine)
class ABaseLevelTeleport : public AIcarusActor
{
public:
    UPROPERTY(EditAnywhere, Instanced) UStaticMeshComponent* BaseMesh;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, Instanced) USceneComponent* ArrowComponent;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, Instanced) UStaticMeshComponent* TeleportPlacementDisc;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, Instanced) UBuildBlockerComponent* BuildBlockerComponent;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UTeleportComponent* TeleportComponent;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, Instanced) UInteractableComponent* InteractableComponent;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, Instanced) UHighlightableComponent* HighlightableComponent;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<ABaseLevelTeleport> ClassToSpawn;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, Instanced) UIcarusMapIconComponent* ExitMapIcon;  // 0x0300, size 0x8
    UPROPERTY(Replicated, ReplicatedUsing) bool bIsInstancedTeleport;  // 0x0308, size 0x1
    UPROPERTY(Replicated, ReplicatedUsing) FBaseLevelTeleportRepInfo MeshRepInfo;  // 0x0310, size 0x80
    UPROPERTY(Replicated) float CooldownCompletionTime;  // 0x0390, size 0x4
    UPROPERTY(Replicated) int32 NumRetrievableRecorders;  // 0x0394, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool bTeleportActive;  // 0x0398, size 0x1
    UPROPERTY(BlueprintAssignable) FTeleportStateChangedEvent OnTeleportStateChangedEvent;  // 0x0399, size 0x1
    UPROPERTY(BlueprintAssignable) FTeleportInteracted OnTeleportInteracted;  // 0x039A, size 0x1
    UPROPERTY(BlueprintAssignable) FBaseLevelTeleportCooldownStateChanged OnCooldownStateChanged;  // 0x03A0, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FTimerHandle CooldownTickTimerHandle;  // 0x03B0, private
    FTimerHandle RetrievableRecorderUpdateHandle;  // 0x03B8, private

    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanRetrieveRecorders() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool CanUseTeleporter() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DupeTeleportInternals(AInstancedCaveEntrance* CopyFrom);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetCooldownSecondsRemaining() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumRetrievableRecorders() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) FRotator GetTeleportDiscRotation();  // parameters 0xC
    UFUNCTION(BlueprintCallable) FTransform GetTeleportDiscTransform();  // parameters 0x30
    UFUNCTION() bool HasRetrievableRecorders(int32& NumFound) const;  // parameters 0x5
    UFUNCTION() void OnRep_IsInstancedTeleport();
    UFUNCTION() void OnRep_MeshRepInfo();
    UFUNCTION() void OnRep_TeleportActive();
    UFUNCTION(BlueprintImplementableEvent) void OnTeleportStateChanged(bool bActive);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void RetrieveCaveRecorders(const FVector& AtWorldLocation, TArray<AActor*>& SpawnedActors);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetCooldownSecondsRemaining(int32 Seconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetTeleportState(bool bIsActive);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void TeleportPlayerNearLocation(AIcarusPlayerCharacter* Character, FString LeavingUniqueLevelName) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) void WorldObjectInteract(AActor* InteractInstigator);  // parameters 0x8

    // Virtual functions that start here:
    //   CanUseTeleporter_Implementation
};
