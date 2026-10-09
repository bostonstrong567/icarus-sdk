// /Script/Icarus.BuildingList
// size 0x10, declared in Icarus/Source/Icarus/Actors/BuildingGridBase.h

USTRUCT()
struct FBuildingList
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABuildingBase*> Buildings;  // 0x0000, size 0x10
};
