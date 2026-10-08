// /Game/BP/Objects/World/Items/Deployables/Missions/BP_Powered_Faction_Mission_Deployable.BP_Powered_Faction_Mission_Deployable_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x731, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Powered_Faction_Mission_Deployable_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool FullyPowered;  // 0x0730, size 0x1

    UFUNCTION(BlueprintCallable) void CheckPowered(bool ForceUpdate);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_Powered_Faction_Mission_Deployable(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnDeviceFullyPowered();
    UFUNCTION(BlueprintCallable) void OnDeviceNotFullyPowered();
    UFUNCTION(BlueprintCallable) void OnDeviceResourceChanged(FIcarusResourcesEnum ResourceType);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnRep_FullyPowered();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
