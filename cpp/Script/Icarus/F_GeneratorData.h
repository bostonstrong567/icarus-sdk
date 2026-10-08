// /Script/Icarus.GeneratorData
// size 0x60, declared in Icarus/Source/Icarus/Traits/Behaviours/Generator/GeneratorData.h

USTRUCT()
struct FGeneratorData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum Resource;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 GenerationRate;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GenerationRatio;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, Transient) float ResourceUnitsRequired;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemsStaticRowHandle> TransmutableItems;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FIcarusResourcesEnum> TransmutableResources;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RequiresManualActivation;  // 0x0058, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OutOfFuelThresholdPercent;  // 0x005C, size 0x4
};
