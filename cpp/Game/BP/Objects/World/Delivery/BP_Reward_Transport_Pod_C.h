// /Game/BP/Objects/World/Delivery/BP_Reward_Transport_Pod.BP_Reward_Transport_Pod_C
// Derives from: ABP_Transport_Pod_Base_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x531, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Reward_Transport_Pod_C : public ABP_Transport_Pod_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioContextComponent* AudioContext;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_FlareSmoke_Yellow;  // 0x04E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Flare_Yellow;  // 0x04E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio_FlareOneShot;  // 0x04F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio_FlareLoopFizz;  // 0x04F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x0500, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_0;  // 0x0508, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0510, size 0x8
    UPROPERTY() float FireFlareTimeline_OverrideAlpha_E47CA7614CCCF9E436A05782351C878D;  // 0x0518, size 0x4
    UPROPERTY() float FireFlareTimeline_FlareLocation_E47CA7614CCCF9E436A05782351C878D;  // 0x051C, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> FireFlareTimeline__Direction_E47CA7614CCCF9E436A05782351C878D;  // 0x0520, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* FireFlareTimeline;  // 0x0528, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool FireFlare;  // 0x0530, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Reward_Transport_Pod(int32 EntryPoint);  // parameters 0x4
    UFUNCTION() void FireFlareTimeline__FinishedFunc();
    UFUNCTION() void FireFlareTimeline__UpdateFunc();
    UFUNCTION(BlueprintCallable) void Flare();
    UFUNCTION(BlueprintCallable) void OnLanded();
    UFUNCTION(BlueprintCallable) void OnRep_FireFlare();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
