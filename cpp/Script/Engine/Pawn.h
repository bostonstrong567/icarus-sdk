// /Script/Engine.Pawn
// Derives from: AActor > UObject
// size 0x280, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/Pawn.h

UCLASS(Config=Game)
class APawn : public AActor, public INavAgentInterface
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseControllerRotationPitch : 1;  // 0x0228, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseControllerRotationYaw : 1;  // 0x0228, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseControllerRotationRoll : 1;  // 0x0228, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCanAffectNavigationGeneration : 1;  // 0x0228, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BaseEyeHeight;  // 0x022C, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<EAutoReceiveInput> AutoPossessPlayer;  // 0x0230, size 0x1
    UPROPERTY(EditAnywhere) EAutoPossessAI AutoPossessAI;  // 0x0231, size 0x1
    UPROPERTY(Replicated) uint8 RemoteViewPitch;  // 0x0232, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AController> AIControllerClass;  // 0x0238, size 0x8
    float BlendedReplayViewPitch;  // 0x0248, not reflected
    UPROPERTY(Transient, BlueprintReadOnly) AController* LastHitBy;  // 0x0250, size 0x8
    UPROPERTY(Replicated, ReplicatedUsing) AController* Controller;  // 0x0258, size 0x8
    float AllowedYawError;  // 0x0260, not reflected
protected:
    UPROPERTY(Transient) FVector ControlInputVector;  // 0x0264, size 0xC
    UPROPERTY(Transient) FVector LastControlInputVector;  // 0x0270, size 0xC
private:
    uint32 : 1 bInputEnabled;  // 0x0228, not reflected
    uint32 : 1 bProcessingOutsideWorldBounds;  // 0x0228, not reflected
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) APlayerState* PlayerState;  // 0x0240, size 0x8
public:
    UFUNCTION(BlueprintCallable) void AddControllerPitchInput(float Val);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void AddControllerRollInput(float Val);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void AddControllerYawInput(float Val);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void AddMovementInput(FVector WorldDirection, float ScaleValue, bool bForce);  // parameters 0x11
    UFUNCTION(BlueprintCallable) FVector ConsumeMovementInputVector();  // parameters 0xC
    UFUNCTION(BlueprintCallable) void DetachFromControllerPendingDestroy();
    UFUNCTION(BlueprintCallable, BlueprintPure) FRotator GetBaseAimRotation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FRotator GetControlRotation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) AController* GetController() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetLastMovementInputVector() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static AActor* GetMovementBaseActor(APawn* Pawn);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) UPawnMovementComponent* GetMovementComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetNavAgentLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetPendingMovementInputVector() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsBotControlled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsControlled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsLocallyControlled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsMoveInputIgnored() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPawnControlled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPlayerControlled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector K2_GetMovementInputVector() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable) void LaunchPawn(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);  // parameters 0xE
    UFUNCTION() void OnRep_Controller();
    UFUNCTION() void OnRep_PlayerState();
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void PawnMakeNoise(float Loudness, FVector NoiseLocation, bool bUseNoiseMakerLocation, AActor* NoiseMaker);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void ReceivePossessed(AController* NewController);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveUnpossessed(AController* OldController);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void SpawnDefaultController();

    // Virtual functions that start here:
    //   AddControllerPitchInput, AddControllerRollInput, AddControllerYawInput, AddMovementInput
    //   ConsumeMovementInputVector, CreatePlayerInputComponent, DestroyPlayerInputComponent
    //   DetachFromControllerPendingDestroy, FaceRotation, GetBaseAimRotation, GetDamageInstigator
    //   GetDefaultHalfHeight, GetMovementBase, GetMovementComponent, GetPawnNoiseEmitterComponent
    //   GetPawnPhysicsVolume, GetPawnViewLocation, GetViewRotation, InFreeCam, IsBotControlled
    //   IsLocallyControlled, IsMoveInputIgnored, IsPlayerControlled, OnRep_Controller, OnRep_PlayerState
    //   PawnClientRestart, PawnStartFire, PossessedBy, ReachedDesiredRotation, RecalculateBaseEyeHeight
    //   Restart, SetPlayerDefaults, SetupPlayerInputComponent, ShouldTakeDamage, SpawnDefaultController
    //   TurnOff, UnPossessed, UpdateNavigationRelevance
};
