// /Script/Icarus.GridPoint
// size 0x10, declared in Icarus/Source/Icarus/Building/BuildingData.h

USTRUCT()
struct FGridPoint
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABuildingBase*> Buildings;  // 0x0000, size 0x10
};
