// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Ape_Spawner_ProtectiveRocks.BP_Ape_Spawner_ProtectiveRocks_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x2E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Ape_Spawner_ProtectiveRocks_C : public AIcarusActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_LRG_017;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_LRG_016;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_LRG_014;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_SurroundMeshes;  // 0x02D8, size 0x8
};
