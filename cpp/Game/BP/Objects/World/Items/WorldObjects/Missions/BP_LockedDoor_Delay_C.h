// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_LockedDoor_Delay.BP_LockedDoor_Delay_C
// Derives from: ABP_LockedDoor_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x351, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_LockedDoor_Delay_C : public ABP_LockedDoor_C
{
public:
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
