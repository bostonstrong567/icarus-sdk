// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Eden_BuildBlocker.BP_Eden_BuildBlocker_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x328, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Eden_BuildBlocker_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBuildBlockerComponent* BuildBlocker;  // 0x0320, size 0x8
};
