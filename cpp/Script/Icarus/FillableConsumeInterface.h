// /Script/Icarus.FillableConsumeInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Deployables/FillableConsumeInterface.h

UCLASS(Abstract)
class UFillableConsumeInterface : public UInterface
{
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void ConsumeFuel(int32 Amount);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool ShouldConsumeFuel(const FHitResult& Hit, int32& AmountToConsume);  // parameters 0x8D
};
