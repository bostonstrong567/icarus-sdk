// /Game/BP/Objects/World/Items/Deployables/Food/BP_Roast_6.BP_Roast_6_C
// Derives from: ABP_Roast_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Roast_6_C : public ABP_Roast_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07D8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Roast_6(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
};
