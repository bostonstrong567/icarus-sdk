// /Script/Icarus.FarmableComponent
// Derives from: UTraitBehaviours > UTraitComponent > UActorComponent > UObject
// size 0xF8, declared in Icarus/Source/Icarus/Traits/FarmableComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UFarmableComponent : public UTraitBehaviours
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<UCultivation*> Cultivations;  // 0x00E8, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetFarmableData(FFarmableData& OutData) const;  // parameters 0x31
};
