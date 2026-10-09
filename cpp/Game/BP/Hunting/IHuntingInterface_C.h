// /Game/BP/Hunting/IHuntingInterface.IHuntingInterface_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UIHuntingInterface_C : public UInterface
{
public:
    UFUNCTION(BlueprintCallable) void GatherSplineLocations(bool& Return, TArray<FVector>& Locations);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GetHuntingWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SendSplineLocations(const TArray<FVector>& Locations);  // parameters 0x10
};
