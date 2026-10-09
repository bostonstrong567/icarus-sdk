// /Script/Icarus.WeightTransferRelationship
// size 0x28, declared in Icarus/Source/Icarus/Building/BuildingData.h

USTRUCT()
struct FWeightTransferRelationship
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UShapeComponent* ShapeComponent;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UWeightComponent* WeightComponent;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABuildingBase*> Buildings;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CachedWeight;  // 0x0020, size 0x4
};
