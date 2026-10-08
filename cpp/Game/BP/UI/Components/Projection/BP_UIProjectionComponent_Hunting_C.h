// /Game/BP/UI/Components/Projection/BP_UIProjectionComponent_Hunting.BP_UIProjectionComponent_Hunting_C
// Derives from: UBP_UIProjectionComponent_C > UActorComponent > UObject
// size 0x119, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_UIProjectionComponent_Hunting_C : public UBP_UIProjectionComponent_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) void GetNextClueDistance(float& Distance);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetWidgetLocation(FVector& Location);  // parameters 0xC
};
