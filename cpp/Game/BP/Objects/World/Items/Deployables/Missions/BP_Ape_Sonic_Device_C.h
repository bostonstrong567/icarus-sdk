// /Game/BP/Objects/World/Items/Deployables/Missions/BP_Ape_Sonic_Device.BP_Ape_Sonic_Device_C
// Derives from: ABP_Deployable_ManualToggle_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x748, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Ape_Sonic_Device_C : public ABP_Deployable_ManualToggle_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* ApeSonicLoopAudio;  // 0x0740, size 0x8

    UFUNCTION(BlueprintCallable) void ActiveUpdated(bool bNewActive);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_Ape_Sonic_Device(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnDeviceOnStateChanged(bool bIsOn);  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast) void Play_Loop_Audio();  // named "Play Loop Audio"
    UFUNCTION(BlueprintCallable, NetMulticast) void Stop_Loop_Audio();  // named "Stop Loop Audio"
};
