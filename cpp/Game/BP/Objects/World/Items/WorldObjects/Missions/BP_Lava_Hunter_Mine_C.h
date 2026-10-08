// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Lava_Hunter_Mine.BP_Lava_Hunter_Mine_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x830, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Lava_Hunter_Mine_C : public ABP_DeployableBase_C, public IAITargetable
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Mine_Lava_Hunter;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_EggSac_Grown;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_EggSac;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ArmedLights;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* InnerRadius;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight04;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Sphere_04;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight03;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Sphere_03;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight02;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Sphere_02;  // 0x0780, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight01;  // 0x0788, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Sphere_01;  // 0x0790, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* SpawnArea;  // 0x0798, size 0x8
    UPROPERTY() float ExplosionTimeline_ExplosionAlpha_CE1266C04850EC300FF66BAF5199D701;  // 0x07A0, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> ExplosionTimeline__Direction_CE1266C04850EC300FF66BAF5199D701;  // 0x07A4, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* ExplosionTimeline;  // 0x07A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> NearbyActors;  // 0x07B0, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool Armed;  // 0x07C0, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool ExplosionTriggered;  // 0x07C1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasExploded;  // 0x07C2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle LightTimerHandle;  // 0x07C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PlacementGracePeriod;  // 0x07D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor ArmedStateColour;  // 0x07D4, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> ValidTargets;  // 0x07E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AIToSpawn;  // 0x07F8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumToSpawn;  // 0x0810, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor DisarmedStateColour;  // 0x0814, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* EggMaterial;  // 0x0828, size 0x8

    UFUNCTION(BlueprintCallable) void BeginExplosion();
    UFUNCTION() void BndEvt__BP_Landmine_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void BndEvt__BP_Landmine_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void CheckForExplosion();
    UFUNCTION(BlueprintCallable) void Event_Damaged(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30, named "Event Damaged"
    UFUNCTION() void ExecuteUbergraph_BP_Lava_Hunter_Mine(int32 EntryPoint);  // parameters 0x4
    UFUNCTION() void ExplosionTimeline__FinishedFunc();
    UFUNCTION() void ExplosionTimeline__UpdateFunc();
    UFUNCTION(BlueprintCallable) void Flicker();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TArray<FCriticalHitLocation> GetCriticalHitBones() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FAIRelationshipsRowHandle GetRelationshipData() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetTargetAlertness() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetTargetLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable) void Grace_Period_End();  // named "Grace Period End"
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void InitDynamicMaterials();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsActorAlive() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsCriticalHitDisabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsHidden() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsStealthBonusDamageDisabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnArm();
    UFUNCTION(BlueprintCallable) void OnRep_Armed();
    UFUNCTION(BlueprintCallable) void OnRep_ExplosionTriggered();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool ShouldOverrideTargetNeutrality(AActor* TargetActor, ERelationshipType& OutRelationshipType) const;  // parameters 0xA
    UFUNCTION(BlueprintCallable) void TriggerExplode();
    UFUNCTION(BlueprintCallable) void UpdateLights(FLinearColor NewLightColor, float Intensity);  // parameters 0x14
};
