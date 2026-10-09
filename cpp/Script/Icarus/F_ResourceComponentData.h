// /Script/Icarus.ResourceComponentData
// size 0xC0, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/ResourceComponent.generated.h

USTRUCT()
struct FResourceComponentData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHasEnergyConnection;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FEnergyRowHandle EnergyFlow;  // 0x001C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHasWaterConnection;  // 0x0034, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWaterRowHandle WaterFlow;  // 0x0038, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHasFuelConnection;  // 0x0050, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFuelRowHandle FuelFlow;  // 0x0054, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHasOxygenConnection;  // 0x006C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FOxygenRowHandle OxygenFlow;  // 0x0070, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHasCrudeOilConnection;  // 0x0088, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCrudeOilRowHandle CrudeOilFlow;  // 0x008C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHasRefinedOilConnection;  // 0x00A4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRefinedOilRowHandle RefinedOilFlow;  // 0x00A8, size 0x18
};
