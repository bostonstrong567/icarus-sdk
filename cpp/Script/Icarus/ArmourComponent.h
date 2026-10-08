// /Script/Icarus.ArmourComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0xD0, declared in Icarus/Source/Icarus/Traits/ArmourComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UArmourComponent : public UTraitComponent
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetArmourData(FArmourData& OutData) const;  // parameters 0x301
};
