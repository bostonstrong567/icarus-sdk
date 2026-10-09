// /Game/UI/ResourceNetworkInspector/BPI_ResourceNetworkInspectorTargetProvider.BPI_ResourceNetworkInspectorTargetProvider_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBPI_ResourceNetworkInspectorTargetProvider_C : public UInterface
{
public:
    UFUNCTION(BlueprintCallable) void GetTargetNetworkType(FIcarusResourcesEnum& TargetNetworkType);  // parameters 0x10
};
