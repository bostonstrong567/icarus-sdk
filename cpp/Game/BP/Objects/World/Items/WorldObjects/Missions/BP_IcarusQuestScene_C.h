// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_IcarusQuestScene.BP_IcarusQuestScene_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x2C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_IcarusQuestScene_C : public AIcarusActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02C0, size 0x8
};
