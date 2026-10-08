// /Script/Icarus.FlammableState_Combusting
// Derives from: UFlammableState > UObject
// size 0x40, declared in Icarus/Source/Icarus/Systems/Disaster/FlammableState.h

UCLASS()
class UFlammableState_Combusting : public UFlammableState
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float FuelMassRemaining;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float NextPropagateSelfTime;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float HeatOfCombustion;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bInfiniteCombustionFuel;  // 0x003C, size 0x1
};
