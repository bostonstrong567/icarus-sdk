// /Game/BP/Objects/World/Items/Weapons/BP_StaticItem_SplineTool_Base.BP_StaticItem_SplineTool_Base_C
// Derives from: AStaticItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x580, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_StaticItem_SplineTool_Base_C : public AStaticItem, public IBPI_ResourceNetworkInspectorTargetProvider_C
{
public:
    UFUNCTION(BlueprintCallable) void GetTargetNetworkType(FIcarusResourcesEnum& TargetNetworkType);  // parameters 0x10
};
