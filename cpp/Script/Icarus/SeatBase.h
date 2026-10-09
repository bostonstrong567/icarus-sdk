// /Script/Icarus.SeatBase
// Derives from: AIcarusActor > AActor > UObject
// size 0x2F0, declared in Icarus/Source/Icarus/Seat/SeatBase.h

UCLASS(Config=Engine)
class ASeatBase : public AIcarusActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinViewPitch;  // 0x02D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxViewPitch;  // 0x02DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinViewYaw;  // 0x02E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxViewYaw;  // 0x02E4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAllowCameraControl;  // 0x02E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIgnoreOutOfBoundsCheck;  // 0x02E9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bMaintainControlRotationOnEntry;  // 0x02EA, size 0x1
protected:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) TWeakObjectPtr<AIcarusPlayerCharacter> AttachedPlayer;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AttachSocketName;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USceneComponent* AttachComponent;  // 0x02D0, size 0x8
public:
    UFUNCTION(BlueprintNativeEvent) void AttachPlayerToSeat(AIcarusPlayerCharacter* PlayerCharacter, const FRotator& EnterRotation);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool CanPlayerEnterSeat(AIcarusPlayerCharacter* PlayerCharacter) const;  // parameters 0x9
    UFUNCTION(BlueprintNativeEvent) void DetachPlayerFromSeat(AIcarusPlayerCharacter* PlayerCharacter, const FVector& ExitLocation, const FRotator& ExitRotation, bool bChangeSeat);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool EnterSeat(AIcarusPlayerCharacter* PlayerCharacter);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool FindExit(FVector& OutExitLocation, FRotator& OutExitRotation);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) AIcarusPlayerCharacter* GetAttachedPlayer() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) APawn* GetPossesTarget() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) AIcarusPlayerController* GetPossesTargetController() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) FRotator GetSeatedPlayerControlRotation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool IsMountSeat() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPossessTargetLocallyControlled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool LeaveSeat(bool bChangeSeat, bool bForce);  // parameters 0x3
    UFUNCTION(NetMulticast, Reliable, BlueprintNativeEvent) void Multicast_AttachPlayerToSeat(AIcarusPlayerCharacter* PlayerCharacter, FRotator EnterRotation);  // parameters 0x14
    UFUNCTION(NetMulticast, Reliable, BlueprintNativeEvent) void Multicast_DetachPlayerFromSeat(AIcarusPlayerCharacter* PlayerCharacter, FVector ExitLocation, FRotator ExitRotation, bool bChangeSeat);  // parameters 0x21
    UFUNCTION(BlueprintNativeEvent) void OnAttachedPlayerDestroyed(AActor* DestroyedAttachedPlayer);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnRep_AttachedPlayer();

    // Virtual functions that start here:
    //   AttachPlayerToSeat_Implementation, CanPlayerEnterSeat_Implementation
    //   DetachPlayerFromSeat_Implementation, EnterSeat_Implementation, FindExit_Implementation
    //   GetAttachedPlayer_Implementation, GetPossesTargetController_Implementation
    //   GetPossesTarget_Implementation, GetSeatedPlayerControlRotation_Implementation
    //   IsMountSeat_Implementation, LeaveSeat_Implementation, Multicast_AttachPlayerToSeat_Implementation
    //   Multicast_DetachPlayerFromSeat_Implementation, OnAttachedPlayerDestroyed_Implementation
    //   OnRep_AttachedPlayer_Implementation
};
