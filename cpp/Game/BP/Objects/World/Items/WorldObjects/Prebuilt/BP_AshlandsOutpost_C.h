// /Game/BP/Objects/World/Items/WorldObjects/Prebuilt/BP_AshlandsOutpost.BP_AshlandsOutpost_C
// Derives from: ABP_Prebuilt_Base_C > APrebuiltStructure > AIcarusActor > AActor > UObject
// size 0x428, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_AshlandsOutpost_C : public ABP_Prebuilt_Base_C
{
public:
    UFUNCTION(BlueprintCallable) void FillCrates();
    UFUNCTION(BlueprintCallable) void GetChest(AIcarusItem*& Array_Element);  // parameters 0x8
};
