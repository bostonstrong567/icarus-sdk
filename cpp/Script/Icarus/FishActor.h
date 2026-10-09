// /Script/Icarus.FishActor
// Derives from: AIcarusActor > AActor > UObject
// size 0x400, declared in Icarus/Source/Icarus/AI/Fish/FishActor.h

UCLASS(Config=Engine)
class AFishActor : public AIcarusActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) USkeletalMeshComponent* Mesh;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, Instanced, BlueprintReadWrite) UFishManager* FishManager;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FFishSetupRowHandle FishSetup;  // 0x02D0, size 0x18
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool bDead;  // 0x02E8, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) float Scale;  // 0x02EC, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) AActor* AttachActor;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FVector_NetQuantize RepLocation;  // 0x02F8, size 0xC
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) FVector_NetQuantize TargetLocation;  // 0x0304, size 0xC
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) AIcarusPlayerCharacter* AwarenessTarget;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere) float AwarenessTimerInterval;  // 0x0318, size 0x4
    UPROPERTY(EditAnywhere) float AwarenessCooldownLength;  // 0x031C, size 0x4
    UPROPERTY(EditAnywhere) float CorrectionVariance;  // 0x0320, size 0x4
private:
    UPROPERTY() int32 FindNewTargetAttempts;  // 0x0324, size 0x4
    UPROPERTY() FFishSetup FishSetupData;  // 0x0328, size 0xC8
    UPROPERTY() FTimerHandle AwarenessTimerHandle;  // 0x03F0, size 0x8
    UPROPERTY() float NextAwarenessTimestamp;  // 0x03F8, size 0x4
public:
    UFUNCTION(BlueprintNativeEvent) void AttackPlayer(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void BPOnRep_AttachActor();
    UFUNCTION(BlueprintImplementableEvent) void BPOnRep_Dead();
    UFUNCTION(BlueprintImplementableEvent) void BPOnRep_Scale();
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetGoalLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMovementSpeed() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsAggressive();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsAware();  // parameters 0x1
    UFUNCTION() void OnRep_AttachActor();
    UFUNCTION(BlueprintNativeEvent) void OnRep_AwarenessTarget();
    UFUNCTION() void OnRep_Dead();
    UFUNCTION() void OnRep_Scale();
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetAttachActor(AActor* NewAttachActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetDead(bool bNewDead);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetScale(float NewScale);  // parameters 0x4

    // Virtual functions that start here:
    //   AttackPlayer_Implementation, OnRep_AwarenessTarget_Implementation
};
