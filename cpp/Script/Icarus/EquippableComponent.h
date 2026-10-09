// /Script/Icarus.EquippableComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0xD0, declared in Icarus/Source/Icarus/Traits/EquippableComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UEquippableComponent : public UTraitComponent
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetEquippableData(FEquippableData& OutData) const;  // parameters 0x119
};
