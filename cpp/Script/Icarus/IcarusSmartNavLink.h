// /Script/Icarus.IcarusSmartNavLink
// Derives from: ANavLinkProxy > AActor > UObject
// size 0x280, declared in Icarus/Source/Icarus/Navigation/IcarusSmartNavLink.h

UCLASS(Config=Engine)
class AIcarusSmartNavLink : public ANavLinkProxy
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ENavigationType NavigationType;  // 0x0270, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NavigationDuration;  // 0x0274, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AllowBasicTraversal;  // 0x0278, size 0x1

    UFUNCTION() void ReachedSmartLink(AActor* actor, const FVector& destination);  // parameters 0x14
};
