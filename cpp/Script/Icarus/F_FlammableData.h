// /Script/Icarus.FlammableData
// size 0x88, declared in Icarus/Source/Icarus/Traits/Behaviours/FlammableData.h

USTRUCT()
struct FFlammableData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSoftClassPtr<UFlammableComponent> Behaviour;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FFlammableAudioData AudioData;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CombustionFuelDensity;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CombustionFuelDensityVariance;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bInfiniteCombustionFuel;  // 0x0050, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ThermalConductivity;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float HeatCapacity;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SurfaceAreaMultiplier;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector CombustingBoundsScale;  // 0x0060, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float HeatOfCombustion;  // 0x006C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float HeatReleaseRate;  // 0x0070, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bDetachAfterCombusted;  // 0x0074, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinCombustionTemperature;  // 0x0078, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxCombustionTemperature;  // 0x007C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bAffectsTemperature;  // 0x0080, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float TemperatureFalloffStrength;  // 0x0084, size 0x4
};
