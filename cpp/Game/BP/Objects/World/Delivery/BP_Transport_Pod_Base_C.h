// /Game/BP/Objects/World/Delivery/BP_Transport_Pod_Base.BP_Transport_Pod_Base_C
// Derives from: ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x4D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Transport_Pod_Base_C : public ABP_ContainerBase_C, public IBPI_GenericAction_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_Thruster;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_FreeFallTrail;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* AudioLocationAlarm;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* FakeLight4;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* FakeLight3;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* FakeLight2;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpotLightComponent* SpotLight4;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpotLightComponent* SpotLight3;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpotLightComponent* SpotLight2;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Lighting;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* FakeLight1;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpotLightComponent* SpotLight1;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DPS_Mission_Stockpile_Ship;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DropshipSonicBoom;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_ShuttleLand;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NiagaraTakeOffScene;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NiagaraLandingScene;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_dropshipThruster;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DropshipThrusterTakeOff;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* MoveDropshipRoot;  // 0x03E0, size 0x8
    UPROPERTY() float Timeline_QuickTakeOff_DropshipHeight_80F18FEC4D560AC5EB30D4BA773ED02B;  // 0x03E8, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_QuickTakeOff__Direction_80F18FEC4D560AC5EB30D4BA773ED02B;  // 0x03EC, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_QuickTakeOff;  // 0x03F0, size 0x8
    UPROPERTY() float Timeline_TakeOff_DropshipHeight_35BC7AA049D29F4A0D64E2A967BED091;  // 0x03F8, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_TakeOff__Direction_35BC7AA049D29F4A0D64E2A967BED091;  // 0x03FC, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_TakeOff;  // 0x0400, size 0x8
    UPROPERTY() float Timeline_2_TakeOffLighting_A9C43A5142C2E8873BB8668637303973;  // 0x0408, size 0x4
    UPROPERTY() float Timeline_2_IdleLighting_A9C43A5142C2E8873BB8668637303973;  // 0x040C, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_2__Direction_A9C43A5142C2E8873BB8668637303973;  // 0x0410, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_2;  // 0x0418, size 0x8
    UPROPERTY() float Timeline_0_DropshipHeight_32E3C03B41EFBF1ED672FA9CEC0001C0;  // 0x0420, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_0__Direction_32E3C03B41EFBF1ED672FA9CEC0001C0;  // 0x0424, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_0;  // 0x0428, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool bDecending;  // 0x0430, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool bAscending;  // 0x0431, size 0x1
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool bInitialised;  // 0x0432, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool bLanded;  // 0x0433, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSpawnLocationFound SpawnLocationFound;  // 0x0438, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Minimum_Distance;  // 0x0448, size 0x4, named "Minimum Distance"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Maximum_Distance;  // 0x044C, size 0x4, named "Maximum Distance"
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool SpawnFound;  // 0x0450, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FLanded Landed;  // 0x0458, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* AscendSound;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* DescendSound;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* LightSource;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* LightDynamicMaterial1;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* LightDynamicMaterial2;  // 0x0488, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* LightDynamicMaterial3;  // 0x0490, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* LightDynamicMaterial4;  // 0x0498, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool EndRecordingOnTakeOff;  // 0x04A0, size 0x1
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool HasAssignedLandingPad;  // 0x04A1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* KnockbackActorTarget;  // 0x04A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> KnockbackTargets;  // 0x04B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxKnockbackTargets;  // 0x04C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* ItemAddedSound;  // 0x04C8, size 0x8

    UFUNCTION() void BndEvt__BP_Transport_Pod_Base_Inventory_K2Node_ComponentBoundEvent_0_InventoryItemAdded__DelegateSignature(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void CleanupLingeringEffects();
    UFUNCTION() void ExecuteUbergraph_BP_Transport_Pod_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FX_FreefallTrail(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void FX_ShuttleGroundDebris(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void FX_SonicBoom(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void FX_ThrusterLand(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void FX_ThrusterTakeOff(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void FallBackFindSpawnLocation(int32 MinimumDistance, int32 MaximumDistance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GenerateSpawnLocation(int32 MinimumDistance, int32 MaximumDistance, AActor* Querier, UEnvQuery* QueryType);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GenericAction();
    UFUNCTION(BlueprintCallable) void GenericActionWithCharacter(AIcarusPlayerCharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GeneticActionInt(int32 Data);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void InitDynamicMaterials();
    UFUNCTION(BlueprintCallable) void KnockBackEvent(float KnockbackForce, float KnockbackRadius, int32 KnockbackDamage);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void LandShip();
    UFUNCTION(BlueprintCallable) void Landed__DelegateSignature();
    UFUNCTION(BlueprintCallable) void LightingController(float IdleLightIntensity, float TakeOffIntensity);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void LightingStateChange();
    UFUNCTION(BlueprintCallable) void OnGenerateSpawnPoint(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnPodAscended();
    UFUNCTION(BlueprintCallable) void OnPodLanded();
    UFUNCTION(BlueprintCallable) void OnRep_bAscending();
    UFUNCTION(BlueprintCallable) void OnRep_bDecending();
    UFUNCTION(BlueprintCallable) void OnRep_bLanded();
    UFUNCTION(BlueprintCallable) void OnTakeOff();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Play_Audio_Ascend();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Play_Audio_Descend();
    UFUNCTION(BlueprintCallable) void PodLandedEvent();
    UFUNCTION(BlueprintCallable) void QuickTakeOff();
    UFUNCTION(BlueprintCallable) void SetManualLandingPoint(FVector Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SpawnLocationFound__DelegateSignature(FVector Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SpawnPointFound(FVector Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void TakeOff();
    UFUNCTION() void Timeline_0__FinishedFunc();
    UFUNCTION() void Timeline_0__GroundDebrisOff__EventFunc();
    UFUNCTION() void Timeline_0__GroundDebrisOn__EventFunc();
    UFUNCTION() void Timeline_0__SonicBoom__EventFunc();
    UFUNCTION() void Timeline_0__ThrusterOff__EventFunc();
    UFUNCTION() void Timeline_0__ThrusterOn__EventFunc();
    UFUNCTION() void Timeline_0__UpdateFunc();
    UFUNCTION() void Timeline_2__FinishedFunc();
    UFUNCTION() void Timeline_2__UpdateFunc();
    UFUNCTION() void Timeline_QuickTakeOff__CreateImpulse__EventFunc();
    UFUNCTION() void Timeline_QuickTakeOff__FinishedFunc();
    UFUNCTION() void Timeline_QuickTakeOff__GroundDebrisOff__EventFunc();
    UFUNCTION() void Timeline_QuickTakeOff__GroundDebrisOn__EventFunc();
    UFUNCTION() void Timeline_QuickTakeOff__ThrusterOn__EventFunc();
    UFUNCTION() void Timeline_QuickTakeOff__UpdateFunc();
    UFUNCTION() void Timeline_TakeOff__CreateImpulse__EventFunc();
    UFUNCTION() void Timeline_TakeOff__FinishedFunc();
    UFUNCTION() void Timeline_TakeOff__GroundDebrisOff__EventFunc();
    UFUNCTION() void Timeline_TakeOff__GroundDebrisOn__EventFunc();
    UFUNCTION() void Timeline_TakeOff__ThrusterOn__EventFunc();
    UFUNCTION() void Timeline_TakeOff__TriggerWarningAudio__EventFunc();
    UFUNCTION() void Timeline_TakeOff__UpdateFunc();
    UFUNCTION(BlueprintCallable) void TryToFindLandingPad(int32 MaxDistance, AActor* Querier, UEnvQuery* Query, bool& FoundPad, FVector& OutLocation);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
