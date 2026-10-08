// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Landmine_Enemy.BP_Landmine_Enemy_C
// Derives from: ABP_Landmine_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Landmine_Enemy_C : public ABP_Landmine_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07D8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Landmine_Enemy(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
