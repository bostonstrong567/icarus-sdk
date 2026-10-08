// /Game/BP/Objects/World/Resources/Nodes/Meteor/BP_Meteor.BP_Meteor_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x3D8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Meteor_C : public AIcarusActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcessExplode;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcessInFlight;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* SphereCollider;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* MeteorTravelAudio;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Meteor_Mesh_Layer;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Meteor_Mesh;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0300, size 0x8
    UPROPERTY() float Timeline_ImpactPostProcess_FlashWeight_F83D4CAF4752A4E37BFA2BA54C8C4722;  // 0x0308, size 0x4
    UPROPERTY() float Timeline_ImpactPostProcess_BlendWeight_F83D4CAF4752A4E37BFA2BA54C8C4722;  // 0x030C, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_ImpactPostProcess__Direction_F83D4CAF4752A4E37BFA2BA54C8C4722;  // 0x0310, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_ImpactPostProcess;  // 0x0318, size 0x8
    UPROPERTY() float Timeline_MeteorVfx_PP_Blendweight_DFEA73F04AA3426CA0E841A5056E70A1;  // 0x0320, size 0x4
    UPROPERTY() float Timeline_MeteorVfx_LightIntensity_DFEA73F04AA3426CA0E841A5056E70A1;  // 0x0324, size 0x4
    UPROPERTY() float Timeline_MeteorVfx_EntryMeshOpacity_DFEA73F04AA3426CA0E841A5056E70A1;  // 0x0328, size 0x4
    UPROPERTY() float Timeline_MeteorVfx_EntryMeshIntensity_DFEA73F04AA3426CA0E841A5056E70A1;  // 0x032C, size 0x4
    UPROPERTY() float Timeline_MeteorVfx_EntryMeshHeat_DFEA73F04AA3426CA0E841A5056E70A1;  // 0x0330, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_MeteorVfx__Direction_DFEA73F04AA3426CA0E841A5056E70A1;  // 0x0334, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_MeteorVfx;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float METEOR_SPEED_SCALAR;  // 0x0340, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float TimeElapsed;  // 0x0344, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeOfFlight;  // 0x0348, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FVector DestPos;  // 0x034C, size 0xC
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FVector StartPos;  // 0x0358, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector MeteorSpin;  // 0x0364, size 0xC
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FRotator DepositRotation;  // 0x0370, size 0xC
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) int32 MetaResouceAmount;  // 0x037C, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FMetaResourceNodesRowHandle MetaResourceRow;  // 0x0380, size 0x18
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FVector MeteorDirection;  // 0x0398, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* MeteorDynamicMaterial;  // 0x03A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* Curve_TimeOfDayMultiplier;  // 0x03B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentTimeOfDay;  // 0x03B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* PostProcessDynamicMaterial;  // 0x03C0, size 0x8
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool IsExploding;  // 0x03C8, size 0x1
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool DelayDone;  // 0x03C9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastCheckedPos;  // 0x03CC, size 0xC

    UFUNCTION(BlueprintCallable) void CheckForPlayersThatCanSeeMeteor();
    UFUNCTION(BlueprintCallable) void DoExplode();
    UFUNCTION(BlueprintCallable) void DoInit();
    UFUNCTION(BlueprintCallable) void DoMove();
    UFUNCTION() void ExecuteUbergraph_BP_Meteor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_MeteorTravelVFX(float ServerTimeOfFlight);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_PlayMeteorHitVFX();
    UFUNCTION(BlueprintCallable) void OnLoaded_72A10B284232D82F40CBF5981917AE35(TSubclassOf<UObject> Loaded);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetInitialMeteorPosDir();
    UFUNCTION(BlueprintCallable) void SpawnMetaDeposit();
    UFUNCTION() void Timeline_ImpactPostProcess__FinishedFunc();
    UFUNCTION() void Timeline_ImpactPostProcess__UpdateFunc();
    UFUNCTION() void Timeline_MeteorVfx__FinishedFunc();
    UFUNCTION() void Timeline_MeteorVfx__UpdateFunc();
};
