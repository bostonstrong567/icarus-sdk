// /Script/Icarus.UsableComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0xD0, declared in Icarus/Source/Icarus/Traits/UsableComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UUsableComponent : public UTraitComponent
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetUsableData(FUsableData& OutData) const;  // parameters 0x31
};
