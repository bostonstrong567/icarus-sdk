// /Game/BP/Objects/World/Items/Deployables/Fishing/BP_Aquarium_T3_Var2.BP_Aquarium_T3_Var2_C
// Derives from: ABP_Aquarium_T3_C > ABP_Aquarium_C > ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x870, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Aquarium_T3_Var2_C : public ABP_Aquarium_T3_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0868, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Aquarium_T3_Var2(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
};
