// /Game/BP/Objects/World/Items/Deployables/Radar/BP_Radar_Electric.BP_Radar_Electric_C
// Derives from: ABP_Radarv3_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7E8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Radar_Electric_C : public ABP_Radarv3_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07E0, size 0x8

    UFUNCTION(BlueprintCallable) void CheckRadarOnState();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Radar_Electric(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnDeviceResourceChanged(FIcarusResourcesEnum ResourceType);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnRadarStateUpdated();
};
