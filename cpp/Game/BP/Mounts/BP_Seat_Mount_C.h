// /Game/BP/Mounts/BP_Seat_Mount.BP_Seat_Mount_C
// Derives from: ABP_SeatBase_C > ASeatBase > AIcarusActor > AActor > UObject
// size 0x608, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Seat_Mount_C : public ABP_SeatBase_C
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
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AutoRun;  // 0x05D4, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* SaddleAudio;  // 0x05D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LerpedYawRate;  // 0x05E0, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool CartActive;  // 0x05E4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FarmingCartModifierUID;  // 0x05E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_ActivateFail;  // 0x05F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UChildActorComponent*> PassengerSeats;  // 0x05F8, size 0x10

    UFUNCTION(BlueprintImplementableEvent) void AttachPlayerToSeat(AIcarusPlayerCharacter* PlayerCharacter, const FRotator& EnterRotation);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector CalculateSpringArmOffset() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) void CanActivateCart(bool& CanActivate);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool CanPlayerEnterSeat(AIcarusPlayerCharacter* PlayerCharacter) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable) void DebugDrawExitLocators();
    UFUNCTION(BlueprintImplementableEvent) void DetachPlayerFromSeat(AIcarusPlayerCharacter* PlayerCharacter, const FVector& ExitLocation, const FRotator& ExitRotation, bool bChangeSeat);  // parameters 0x21
    UFUNCTION() void ExecuteUbergraph_BP_Seat_Mount(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAudioSeatType(TEnumAsByte<EAudioSeatType>& Type);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) APawn* GetPossesTarget() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) AIcarusPlayerController* GetPossesTargetController() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) FGameplayTagContainer GetSaddleTags();  // parameters 0x20
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void InitialiseWithSaddleData(FSaddlesRowHandle SaddleData);  // parameters 0x18
    UFUNCTION() void InpActEvt_AltFire_K2Node_InputActionEvent_1(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_AltInteract_K2Node_InputActionEvent_0(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_AutoRun_K2Node_InputActionEvent_2(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Fire_K2Node_InputActionEvent_6(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Jump_K2Node_InputActionEvent_5(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_ToggleSuitLight_K2Node_InputActionEvent_3(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_ToggleSuitLight_K2Node_InputActionEvent_4(FKey Key);  // parameters 0x18
    UFUNCTION() void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2(float AxisValue);  // parameters 0x4
    UFUNCTION() void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3(float AxisValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsMountSeat() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnLoaded_B88D173A4964F83FEC477F8471D4FBA7(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_E21A5140499D5CD5824B7BB170FB2B13(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_ED13DDE04EB6D4E6D144218EA985DD54(TSubclassOf<UObject> Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnMountDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnMountEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void OnRepActivateCartAudio();
    UFUNCTION(BlueprintCallable) void OnRep_CartActive();
    UFUNCTION(BlueprintCallable) void OnRep_SaddleDataRow();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_ToggleCartActive();
    UFUNCTION(BlueprintCallable) void Setup_Passenger_Seats();  // named "Setup Passenger Seats"
    UFUNCTION(BlueprintCallable) void SetupSaddleCosmetics();
    UFUNCTION(BlueprintCallable) void TryAttachSpringArmToCharacter();
    UFUNCTION(BlueprintCallable) void UpdateAudioParameters();
};
