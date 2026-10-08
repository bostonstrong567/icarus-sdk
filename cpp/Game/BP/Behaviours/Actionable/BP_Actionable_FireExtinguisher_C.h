// /Game/BP/Behaviours/Actionable/BP_Actionable_FireExtinguisher.BP_Actionable_FireExtinguisher_C
// Derives from: UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x358, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_Actionable_FireExtinguisher_C : public UBP_ActionableBehaviour_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* OwningActor;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_SkeletalItem_FireExtinguisher_C* ExtinguisherSKItem;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DoFire;  // 0x0330, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_Audio_Component;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* ExtinguishSound;  // 0x0340, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UObject*> StoredMontages;  // 0x0348, size 0x10

    UFUNCTION(BlueprintCallable) void CanFire(bool& CanFire);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_Actionable_FireExtinguisher(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) int32 GetStatAdjustedDurability(int32 DurabilityLoss);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void IsFiring(bool& Firing);  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast) void Multi_SpawnFX(FVector ImpactPoint, FVector ImpactNormal);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnLoaded_2B8B2B624CE5F97DAE6892B79C537CC2(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintCallable) void ProcessDurability(int32 DurabilityLoss);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ProcessWater();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void Setup(AActor* OwningActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SphereTrace();
    UFUNCTION(BlueprintCallable) void Stop_Fire();  // named "Stop Fire"
    UFUNCTION(BlueprintCallable) void TickTimer();
};
