// /Script/Icarus.IcarusNavLinkController
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Navigation/IcarusNavLinkController.h

UCLASS(Abstract)
class UIcarusNavLinkController : public UInterface
{
public:

    UFUNCTION(BlueprintNativeEvent) bool IsLinkPathfindingAllowed(UObject* Querier) const;  // parameters 0x9
};
