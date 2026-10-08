// /Game/BP/Objects/World/Items/WorldObjects/Prebuilt/BP_MoOutpost.BP_MoOutpost_C
// Derives from: ABP_Prebuilt_Base_C > APrebuiltStructure > AIcarusActor > AActor > UObject
// size 0x428, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_MoOutpost_C : public ABP_Prebuilt_Base_C
{
public:

    UFUNCTION(BlueprintCallable) void GetChest(AIcarusItem*& Array_Element);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Prepare_Hideout();  // named "Prepare Hideout"
};
