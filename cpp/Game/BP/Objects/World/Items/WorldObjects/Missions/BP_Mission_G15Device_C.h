// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_G15Device.BP_Mission_G15Device_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x361, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_G15Device_C : public ABP_WorldObject_C, public IAITargetable
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* ScannerAudio;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* AITargetLocation;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGenericAITargetComponent* GenericAITarget;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FInteracted Interacted;  // 0x0340, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool RecentlyDamaged;  // 0x0350, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle Timer;  // 0x0358, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool OnRep_AudioActive;  // 0x0360, size 0x1

    UFUNCTION(BlueprintCallable) void CustomEvent_0();
    UFUNCTION() void ExecuteUbergraph_BP_Mission_G15Device(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TArray<FCriticalHitLocation> GetCriticalHitBones() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FAIRelationshipsRowHandle GetRelationshipData() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetTargetAlertness() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetTargetLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable) void Interacted__DelegateSignature();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsActorAlive() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsCriticalHitDisabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsHidden() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsStealthBonusDamageDisabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnDamaged(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void OnRep_OnRep_AudioActive();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool ShouldOverrideTargetNeutrality(AActor* TargetActor, ERelationshipType& OutRelationshipType) const;  // parameters 0xA
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
