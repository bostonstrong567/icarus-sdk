// /Script/Icarus.CombustibleComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0xD8, declared in Icarus/Source/Icarus/Traits/CombustibleComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UCombustibleComponent : public UTraitComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MillijoulesRemaining;  // 0x00D0, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetCombustibleData(FCombustibleData& OutData) const;  // parameters 0x41
};
