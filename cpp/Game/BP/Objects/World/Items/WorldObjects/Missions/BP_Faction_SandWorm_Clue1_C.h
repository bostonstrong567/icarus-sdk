// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Faction_SandWorm_Clue1.BP_Faction_SandWorm_Clue1_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x340, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Faction_SandWorm_Clue1_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_SandMould_INT;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_TrailMould;  // 0x0338, size 0x8
};
