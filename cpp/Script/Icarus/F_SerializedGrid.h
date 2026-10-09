// /Script/Icarus.SerializedGrid
// size 0x60, declared in Icarus/Source/Icarus/Actors/BuildingGridBase.h

USTRUCT()
struct FSerializedGrid
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform GridTrans;  // 0x0000, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSubclassOf<ABuildingBase>> BuildingClasses;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTransform> BuildingTrans;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemData> BuildingItemData;  // 0x0050, size 0x10
};
