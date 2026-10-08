// /Game/BP/Objects/World/Items/Deployables/Missions/BP_Enzyme_Disperser_World.BP_Enzyme_Disperser_World_C
// Derives from: ABP_Enzyme_Disperser_C > ABP_Deployable_ManualToggle_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x798, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Enzyme_Disperser_World_C : public ABP_Enzyme_Disperser_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0790, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Enzyme_Disperser_World(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
};
