// /Game/BP/Quests/Implementations/Bw4_Satellites/BP_BW4_Satellite_Object.BP_BW4_Satellite_Object_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x498, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BW4_Satellite_Object_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInventoryComponent* Inventory;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* DefenceAudioComponent;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* EnterAudioTrigger;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_FactionSatellite_V2_FX1;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_FactionSatellite_V2_FX;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_FactionSatellite_FX;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight5;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight4;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cylinder1;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cylinder;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusNavigationDirtier* IcarusNavigationDirtier;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_C* BP_UIProjectionComponent;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_SML_012;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_SML_011;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_SML_010;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_SML_09;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_SML_06;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_SML_02;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_SML_01;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DPS_Satellite_INARIS_Crashed_CF_Chute2;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DPS_Satellite_INARIS_Crashed_CF_Chute;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_SML_08;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_SML_07;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_Stone_01;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_SML_04;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_SML_03;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_SML_05;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight3;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight2;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight1;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SM_DPS_Satellite_INARIS_Crashed_CF_CoreInt;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DPS_Satellite_INARIS_Crashed_CF_Ground;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0440, size 0x8
    UPROPERTY() float FlickerTimeline_NewTrack_0_5897F4764DDE427A04175AB479BDCF16;  // 0x0448, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> FlickerTimeline__Direction_5897F4764DDE427A04175AB479BDCF16;  // 0x044C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* FlickerTimeline;  // 0x0450, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* Core_Material;  // 0x0458, size 0x8, named "Core Material"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* Material1;  // 0x0460, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* Material2;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* LastInteractedPlayer;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_ArmInteraction;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_DefenseTimerEnded;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_NeedleRemoved;  // 0x0488, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsArmed;  // 0x0490, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool DefendComplete;  // 0x0491, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StatUID;  // 0x0494, size 0x4

    UFUNCTION(BlueprintCallable) void ActivatedStateUpdated(bool Activated, bool Defending);  // parameters 0x2
    UFUNCTION() void ExecuteUbergraph_BP_BW4_Satellite_Object(int32 EntryPoint);  // parameters 0x4
    UFUNCTION() void FlickerTimeline__FinishedFunc();
    UFUNCTION() void FlickerTimeline__UpdateFunc();
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsFunctional(bool& bFunctional);  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_PlayWarheadRemovedFX();
    UFUNCTION(BlueprintCallable) void OnInventoryItemRemoved(UInventory* Inventory, int32 Location, const FItemData& Item);  // parameters 0x200
    UFUNCTION(BlueprintCallable) void OnRep_DefendComplete();
    UFUNCTION(BlueprintCallable) void OnRep_IsArmed();
    UFUNCTION(BlueprintCallable) void PlaySFX(UFMODEvent* FMODEvent);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateState();
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
