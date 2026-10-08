// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Rock_Golem_Spawner_Drill.BP_Rock_Golem_Spawner_Drill_C
// Derives from: ABP_Rock_Golem_Spawner_C > ABP_Faction_Mission_Spawner_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x590, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Rock_Golem_Spawner_Drill_C : public ABP_Rock_Golem_Spawner_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Drill;  // 0x0588, size 0x8
};
