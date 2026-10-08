// /Script/Icarus.ConsumableComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0xD0, declared in Icarus/Source/Icarus/Traits/ConsumableComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UConsumableComponent : public UTraitComponent
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetConsumableData(FConsumableData& OutData) const;  // parameters 0xA1
};
