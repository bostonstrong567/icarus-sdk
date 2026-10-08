// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Faction_SandWorm_Clue2.BP_Faction_SandWorm_Clue2_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x358, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Faction_SandWorm_Clue2_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal1;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_Stone_03;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_Stone_02;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_Stone_01;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DC_Rock_sandworm_destruction;  // 0x0350, size 0x8
};
