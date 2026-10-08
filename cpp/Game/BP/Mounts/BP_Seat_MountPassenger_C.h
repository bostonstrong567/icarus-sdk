// /Game/BP/Mounts/BP_Seat_MountPassenger.BP_Seat_MountPassenger_C
// Derives from: ABP_SeatBase_C > ASeatBase > AIcarusActor > AActor > UObject
// size 0x5F0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Seat_MountPassenger_C : public ABP_SeatBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Backup_Exit_05;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Backup_Exit_04;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Backup_Exit_03;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SaddleSkeletalMesh;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Backup_Exit_02;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Backup_Exit_01;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Exit_02;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Exit_01;  // 0x03B8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FItemData SaddleItemData;  // 0x03C0, size 0x1F0
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FSaddlesRowHandle SaddleDataRow;  // 0x05B0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector CameraAttachOffset;  // 0x05C8, size 0xC
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* SaddleAudio;  // 0x05D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LerpedYawRate;  // 0x05E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_ActivateFail;  // 0x05E8, size 0x8

    UFUNCTION(BlueprintImplementableEvent) void AttachPlayerToSeat(AIcarusPlayerCharacter* PlayerCharacter, const FRotator& EnterRotation);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector CalculateSpringArmOffset() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool CanPlayerEnterSeat(AIcarusPlayerCharacter* PlayerCharacter) const;  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void DetachPlayerFromSeat(AIcarusPlayerCharacter* PlayerCharacter, const FVector& ExitLocation, const FRotator& ExitRotation, bool bChangeSeat);  // parameters 0x21
    UFUNCTION() void ExecuteUbergraph_BP_Seat_MountPassenger(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAudioSeatType(TEnumAsByte<EAudioSeatType>& Type);  // parameters 0x1
    UFUNCTION(BlueprintCallable) FGameplayTagContainer GetSaddleTags();  // parameters 0x20
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void InitialiseWithSaddleData(FSaddlesRowHandle SaddleData);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsMountSeat() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnLoaded_0A1A08C94E5806B269525BB7A9CD472A(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_6B2458764B42E85DEF0B7A881529A1C5(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_DBF1A82B41191A0E4B63C1837703B884(TSubclassOf<UObject> Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnMountDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnMountEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void OnRepActivateCartAudio();
    UFUNCTION(BlueprintCallable) void OnRep_SaddleDataRow();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetupSaddleCosmetics();
    UFUNCTION(BlueprintCallable) void TryAttachSpringArmToCharacter();
    UFUNCTION(BlueprintCallable) void UpdateAudioParameters();
};
