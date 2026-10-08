// /Game/BP/AI/GOAP/Misc/BP_RetreatTargetInterface.BP_RetreatTargetInterface_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_RetreatTargetInterface_C : public UInterface
{
public:

    UFUNCTION(BlueprintCallable) void GetRetreatEntryLocation(FVector& WorldLocation, FRotator& WorldRotation);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GetRetreatExitLocation(FVector& WorldLocation, FRotator& WorldRotation);  // parameters 0x18
};
