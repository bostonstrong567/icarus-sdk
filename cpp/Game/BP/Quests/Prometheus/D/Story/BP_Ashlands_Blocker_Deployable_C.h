// /Game/BP/Quests/Prometheus/D/Story/BP_Ashlands_Blocker_Deployable.BP_Ashlands_Blocker_Deployable_C
// Derives from: ABP_Fortification_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x760, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Ashlands_Blocker_Deployable_C : public ABP_Fortification_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0758, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Ashlands_Blocker_Deployable(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
