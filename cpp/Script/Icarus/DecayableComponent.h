// /Script/Icarus.DecayableComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0xE0, declared in Icarus/Source/Icarus/Traits/DecayableComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UDecayableComponent : public UTraitComponent
{
public:
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 DecayTime;  // 0x00D0, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 SpoilTime;  // 0x00D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentTime;  // 0x00D8, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetDecayableData(FDecayableData& OutData) const;  // parameters 0x41
};
