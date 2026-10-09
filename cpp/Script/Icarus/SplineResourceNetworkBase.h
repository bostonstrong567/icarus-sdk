// /Script/Icarus.SplineResourceNetworkBase
// Derives from: AResourceNetwork > AIcarusActor > AActor > UObject
// size 0x2F8, declared in Icarus/Source/Icarus/Systems/ResourceNetworks/SplineResourceNetworkBase.h

UCLASS(Config=Engine)
class ASplineResourceNetworkBase : public AResourceNetwork
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void AddSplineTo(AResourceSplineActorBase* ResourceSpline);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void RemoveSplineTo(AResourceSplineActorBase* ResourceSpline);  // parameters 0x8
};
