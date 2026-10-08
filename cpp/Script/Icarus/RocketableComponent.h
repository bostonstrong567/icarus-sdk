// /Script/Icarus.RocketableComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0xD0, declared in Icarus/Source/Icarus/Traits/RocketableComponent.h

UCLASS(EditInlineNew, Config=Engine)
class URocketableComponent : public UTraitComponent
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetRocketableData(FRocketableData& OutData) const;  // parameters 0x91
};
