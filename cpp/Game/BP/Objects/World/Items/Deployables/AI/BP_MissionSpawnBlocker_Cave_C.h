// /Game/BP/Objects/World/Items/Deployables/AI/BP_MissionSpawnBlocker_Cave.BP_MissionSpawnBlocker_Cave_C
// Derives from: ABP_MissionSpawnBlocker_C > AIcarusActor > AActor > UObject
// size 0x2D8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_MissionSpawnBlocker_Cave_C : public ABP_MissionSpawnBlocker_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02D0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_MissionSpawnBlocker_Cave(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
};
