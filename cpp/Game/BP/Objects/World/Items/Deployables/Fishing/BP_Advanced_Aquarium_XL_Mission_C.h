// /Game/BP/Objects/World/Items/Deployables/Fishing/BP_Advanced_Aquarium_XL_Mission.BP_Advanced_Aquarium_XL_Mission_C
// Derives from: ABP_Advanced_Aquarium_XL_C > ABP_Advanced_Aquarium_C > ABP_Aquarium_C > ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x858, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Advanced_Aquarium_XL_Mission_C : public ABP_Advanced_Aquarium_XL_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0850, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Advanced_Aquarium_XL_Mission(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
};
