// /Game/BP/Objects/World/Items/Deployables/Prop/BP_Prop_Surgical_Set.BP_Prop_Surgical_Set_C
// Derives from: ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x758, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Prop_Surgical_Set_C : public ABP_DeployableContainerBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0750, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Prop_Surgical_Set(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
};
