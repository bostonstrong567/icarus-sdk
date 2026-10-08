// /Script/Icarus.TransmutableComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0xD8, declared in Icarus/Source/Icarus/Traits/TransmutableComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UTransmutableComponent : public UTraitComponent
{
public:
    UPROPERTY(Replicated, BlueprintReadWrite) int32 TransmutableUnits;  // 0x00D0, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetTransmutableData(FTransmutableData& OutData) const;  // parameters 0x51
    UFUNCTION(BlueprintCallable) void SetTransmutableUnits(int32 NewUnits);  // parameters 0x4
};
