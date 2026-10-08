// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_IceSlug_Spawner.BP_IceSlug_Spawner_C
// Derives from: ABP_Rock_Golem_Spawner_C > ABP_Faction_Mission_Spawner_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x590, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_IceSlug_Spawner_C : public ABP_Rock_Golem_Spawner_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0588, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_IceSlug_Spawner(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
