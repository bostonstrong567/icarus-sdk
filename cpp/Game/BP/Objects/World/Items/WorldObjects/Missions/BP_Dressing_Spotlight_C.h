// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Dressing_Spotlight.BP_Dressing_Spotlight_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x328, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Dressing_Spotlight_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight;  // 0x0320, size 0x8
};
