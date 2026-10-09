// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_IceMammoth_Corpse_Dressing.BP_Mission_IceMammoth_Corpse_Dressing_C
// Derives from: ABP_Mission_IceMammoth_Corpse_C > ABP_BatNest_Arctic_C > ABP_BatNest_C > ABP_Nest_Base_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x500, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_IceMammoth_Corpse_Dressing_C : public ABP_Mission_IceMammoth_Corpse_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) void AddExtraLoot(TArray<FItemData>& ExtraLoot);  // parameters 0x10
};
