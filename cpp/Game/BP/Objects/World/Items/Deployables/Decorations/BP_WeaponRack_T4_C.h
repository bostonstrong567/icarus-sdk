// /Game/BP/Objects/World/Items/Deployables/Decorations/BP_WeaponRack_T4.BP_WeaponRack_T4_C
// Derives from: ABP_WeaponRack_Single_C > ABP_WeaponRackBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7C1, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WeaponRack_T4_C : public ABP_WeaponRack_Single_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0790, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URectLightComponent* RectLight;  // 0x0798, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* ActiveAudio;  // 0x07A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Lights;  // 0x07A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* FMODEvent_SwitchOff;  // 0x07B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* FMODEvent_SwitchOn;  // 0x07B8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Is_Running;  // 0x07C0, size 0x1, named "Is Running"

    UFUNCTION(BlueprintCallable) void CalculateDeviceRunning(bool& IsRunning);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_WeaponRack_T4(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnDeviceStateChanged(bool bIsOn);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnRep_Is_Running();  // named "OnRep_Is Running"
    UFUNCTION(BlueprintCallable) void PlaySwitchSound(bool On);  // parameters 0x1
};
