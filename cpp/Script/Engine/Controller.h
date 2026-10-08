// /Script/Engine.Controller
// Derives from: AActor > UObject
// size 0x298, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/Controller.h

UCLASS(Abstract, NotPlaceable, Config=Engine)
class AController : public AActor, public INavAgentInterface
{
public:
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) APlayerState* PlayerState;  // 0x0228, size 0x8
    UPROPERTY(BlueprintAssignable) FInstigatedAnyDamageSignature OnInstigatedAnyDamage;  // 0x0238, size 0x10
    UPROPERTY() FName StateName;  // 0x0248, size 0x8
    UPROPERTY(Replicated, ReplicatedUsing) APawn* Pawn;  // 0x0250, size 0x8
    UPROPERTY() ACharacter* Character;  // 0x0260, size 0x8
    UPROPERTY(Instanced) USceneComponent* TransformComponent;  // 0x0268, size 0x8
    UPROPERTY() FRotator ControlRotation;  // 0x0288, size 0xC
    UPROPERTY(EditAnywhere) uint8 bAttachToPawn : 1;  // 0x0294, mask 0x01

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<AActor,FWeakObjectPtr> StartSpot;  // 0x0230
    TWeakObjectPtr<APawn,FWeakObjectPtr> OldPawn;  // 0x0258, private
    TMulticastDelegate<void __cdecl(APawn *),FDefaultDelegateUserPolicy> OnNewPawn;  // 0x0270, protected
    uint8 : 1 bIsPlayerController;  // 0x0294, protected
    uint8 : 1 bCanPossessWithoutAuthority;  // 0x0294, protected
    uint8 IgnoreMoveInput;  // 0x0295, protected
    uint8 IgnoreLookInput;  // 0x0296, protected

    UFUNCTION(BlueprintCallable) APlayerController* CastToPlayerController();  // parameters 0x8
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientSetLocation(FVector NewLocation, FRotator NewRotation);  // parameters 0x18
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientSetRotation(FRotator NewRotation, bool bResetCamera);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure) FRotator GetControlRotation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FRotator GetDesiredRotation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) AActor* GetViewTarget() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsLocalController() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsLocalPlayerController() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsLookInputIgnored() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsMoveInputIgnored() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPlayerController() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) APawn* K2_GetPawn() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool LineOfSightTo(AActor* Other, FVector ViewPoint, bool bAlternateChecks) const;  // parameters 0x16
    UFUNCTION() void OnRep_Pawn();
    UFUNCTION() void OnRep_PlayerState();
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void Possess(APawn* InPawn);  // parameters 0x8
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void ReceiveInstigatedAnyDamage(float Damage, UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void ReceivePossess(APawn* PossessedPawn);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveUnPossess(APawn* UnpossessedPawn);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ResetIgnoreInputFlags();
    UFUNCTION(BlueprintCallable) void ResetIgnoreLookInput();
    UFUNCTION(BlueprintCallable) void ResetIgnoreMoveInput();
    UFUNCTION(BlueprintCallable) void SetControlRotation(const FRotator& NewRotation);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetIgnoreLookInput(bool bNewLookInput);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetIgnoreMoveInput(bool bNewMoveInput);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetInitialLocationAndRotation(const FVector& NewLocation, const FRotator& NewRotation);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void StopMovement();
    UFUNCTION(BlueprintCallable) void UnPossess();

    // Virtual functions that start here:
    //   AddPawnTickDependency, AttachToPawn, BeginInactiveState, ChangeState, CleanupPlayerState
    //   ClientSetLocation_Implementation, ClientSetLocation_Validate, ClientSetRotation_Implementation
    //   ClientSetRotation_Validate, CurrentLevelUnloaded, DetachFromPawn, EndInactiveState
    //   FailedToSpawnPawn, GameHasEnded, GetControlRotation, GetDesiredRotation, GetPlayerViewPoint
    //   GetViewTarget, InitNavigationControl, InitPlayerState, InstigatedAnyDamage, IsLocalController
    //   IsLookInputIgnored, IsMoveInputIgnored, LineOfSightTo, OnPossess, OnRep_Pawn, OnRep_PlayerState
    //   OnUnPossess, PawnPendingDestroy, Possess, RemovePawnTickDependency, ResetIgnoreInputFlags
    //   ResetIgnoreLookInput, ResetIgnoreMoveInput, SetControlRotation, SetIgnoreLookInput
    //   SetIgnoreMoveInput, SetInitialLocationAndRotation, SetPawn, StopMovement, UnPossess
    //   UpdateNavigationComponents
};
