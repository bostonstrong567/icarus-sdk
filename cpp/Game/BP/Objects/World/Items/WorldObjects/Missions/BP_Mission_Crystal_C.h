// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Crystal.BP_Mission_Crystal_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x31A, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Crystal_C : public ABP_WorldObject_C
{
public:
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
