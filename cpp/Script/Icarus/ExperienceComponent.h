// /Script/Icarus.ExperienceComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0xD0, declared in Icarus/Source/Icarus/Traits/ExperienceComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UExperienceComponent : public UTraitComponent
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetExperienceData(FExperienceData& OutData) const;  // parameters 0x69
    UFUNCTION(BlueprintCallable) bool TriggerExperienceEvent(EExperienceSource Type, AActor* Target);  // parameters 0x11
};
