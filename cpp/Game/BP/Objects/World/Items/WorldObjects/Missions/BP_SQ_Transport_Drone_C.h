// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_SQ_Transport_Drone.BP_SQ_Transport_Drone_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x3CC, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SQ_Transport_Drone_C : public ABP_WorldObject_C, public IBPI_GenericAction_C, public IAITargetable
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh2;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SphereHelper_Electric;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSplineConnectionComponent_Electric_C* BP_IcarusSplineConnectionComponent_Electric;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* SplineConnectors;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGenericAITargetComponent* GenericAITarget;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudioFLY;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInventoryComponent* Inventory_0;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_FillableComponent_C* BP_FillableComponent;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UResourceComponent* ResourceComponent;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara_BrokenFX;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh1;  // 0x0388, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_DroneSpline_C* Spline;  // 0x0390, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BaseTotalTime;  // 0x0398, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float Progress;  // 0x039C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool Repaired;  // 0x03A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TheoreticalMax;  // 0x03A4, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ABP_SQ_TransportDrone_Proxy_C* MovementProxy;  // 0x03A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WaitingForEngagement;  // 0x03B0, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool IsDamaged;  // 0x03B1, size 0x1
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) bool ReadyToDeploy;  // 0x03B2, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FVector_NetQuantize MovementProxyLocation;  // 0x03B4, size 0xC
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FVector_NetQuantize MovementProxyRotation;  // 0x03C0, size 0xC

    UFUNCTION(BlueprintCallable) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_SQ_Transport_Drone(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenericAction();
    UFUNCTION(BlueprintCallable) void GenericActionWithCharacter(AIcarusPlayerCharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GeneticActionInt(int32 Data);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TArray<FCriticalHitLocation> GetCriticalHitBones() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetProxyTransform(FTransform& OutTransform) const;  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FAIRelationshipsRowHandle GetRelationshipData() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetTargetAlertness() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetTargetLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsActorAlive() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsCriticalHitDisabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsHidden() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsStealthBonusDamageDisabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_ClientsPlayMontage(UAnimMontage* MontageToPlay, FName StartingSection);  // parameters 0x10
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_ExplosionFX();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_SpawnCrate();
    UFUNCTION(BlueprintCallable) void OnBlendOut_50716F3A402A2454DD89F4B5F2144107(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnBlendOut_C50AD5F74AAAE0C839BDA8A6AB1BBBB4(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnBlendOut_C91D1DDB47B220BF5643BD858F2AB1D2(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_50716F3A402A2454DD89F4B5F2144107(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_C50AD5F74AAAE0C839BDA8A6AB1BBBB4(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_C91D1DDB47B220BF5643BD858F2AB1D2(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnDroneDamaged(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnInterrupted_50716F3A402A2454DD89F4B5F2144107(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_C50AD5F74AAAE0C839BDA8A6AB1BBBB4(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_C91D1DDB47B220BF5643BD858F2AB1D2(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_50716F3A402A2454DD89F4B5F2144107(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_C50AD5F74AAAE0C839BDA8A6AB1BBBB4(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_C91D1DDB47B220BF5643BD858F2AB1D2(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_50716F3A402A2454DD89F4B5F2144107(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_C50AD5F74AAAE0C839BDA8A6AB1BBBB4(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_C91D1DDB47B220BF5643BD858F2AB1D2(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnRep_IsDamaged();
    UFUNCTION(BlueprintCallable) void OnRep_Repaired();
    UFUNCTION(BlueprintCallable, BlueprintPure) void PlayerDistanceCheck(int32& InRange);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void ReceiveAnyDamage(float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool ShouldOverrideTargetNeutrality(AActor* TargetActor, ERelationshipType& OutRelationshipType) const;  // parameters 0xA
    UFUNCTION(BlueprintCallable) void TriggerMove();
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
