// /Script/Icarus.DropGroupData
// size 0x20, declared in Icarus/Source/Icarus/DataStructs/WorldData.h

USTRUCT()
struct FDropGroupData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> Locations;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString GroupName;  // 0x0010, size 0x10
};
