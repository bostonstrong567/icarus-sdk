// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Landmine.BP_Landmine_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7D2, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Landmine_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* InnerRadius;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x0748, size 0x8
    UPROPERTY() float Timeline_0_LightFalloffExponent_342C2ECA4D50B3E0191A7FB65B24B30A;  // 0x0750, size 0x4
    UPROPERTY() float Timeline_0_LightIntensity_342C2ECA4D50B3E0191A7FB65B24B30A;  // 0x0754, size 0x4
    UPROPERTY() float Timeline_0_EmissiveIntensity_342C2ECA4D50B3E0191A7FB65B24B30A;  // 0x0758, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_0__Direction_342C2ECA4D50B3E0191A7FB65B24B30A;  // 0x075C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_0;  // 0x0760, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> ExplosionRange;  // 0x0768, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool Armed;  // 0x0778, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool ExplosionTriggered;  // 0x0779, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasExploded;  // 0x077A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PlayersInRangeCount;  // 0x077C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* DynamicMaterial_1;  // 0x0780, size 0x8, named "DynamicMaterial 1"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* DynamicMaterial_2;  // 0x0788, size 0x8, named "DynamicMaterial 2"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle LightTimerHandle;  // 0x0790, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PlacementGracePeriod;  // 0x0798, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 LandmineState;  // 0x079C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor LandmineState1Colour;  // 0x07A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor LandmineState2Colour;  // 0x07B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor LandmineState3Colour;  // 0x07C0, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool DynamicMaterialsCreated;  // 0x07D0, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsEnemyLandmine;  // 0x07D1, size 0x1

    UFUNCTION() void BndEvt__BP_Landmine_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void BndEvt__BP_Landmine_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void CheckForExplosion();
    UFUNCTION(BlueprintCallable) void CheckForNoExploCheat(bool& DirtyCheater);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DoDamage();
    UFUNCTION(BlueprintCallable) void DoDamageToAI(AActor* Defender);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DoDamageToPlayer(AActor* Defender);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DoExplosionEffects(bool PlayBaseExplosionFX);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Event_Damaged(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30, named "Event Damaged"
    UFUNCTION() void ExecuteUbergraph_BP_Landmine(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Flicker();
    UFUNCTION(BlueprintCallable) void Grace_Period_End();  // named "Grace Period End"
    UFUNCTION(BlueprintCallable) void OnArm();
    UFUNCTION(BlueprintCallable) void OnExplode();
    UFUNCTION(BlueprintCallable) void OnRep_Armed();
    UFUNCTION(BlueprintCallable) void OnRep_Explode();
    UFUNCTION(BlueprintCallable) void OnRep_LandmineState();
    UFUNCTION(BlueprintCallable) void OnRep_SetDynamicMaterials();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION() void Timeline_0__BeepTrigger__EventFunc();
    UFUNCTION() void Timeline_0__Explode__EventFunc();
    UFUNCTION() void Timeline_0__FinishedFunc();
    UFUNCTION() void Timeline_0__SetProximityColour__EventFunc();
    UFUNCTION() void Timeline_0__UpdateFunc();
    UFUNCTION(BlueprintCallable) void TriggerExplode();
};
