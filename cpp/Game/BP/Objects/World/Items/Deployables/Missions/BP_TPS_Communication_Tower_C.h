// /Game/BP/Objects/World/Items/Deployables/Missions/BP_TPS_Communication_Tower.BP_TPS_Communication_Tower_C
// Derives from: ABP_Deployable_ManualToggle_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x748, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_TPS_Communication_Tower_C : public ABP_Deployable_ManualToggle_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0740, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_TPS_Communication_Tower(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
};
