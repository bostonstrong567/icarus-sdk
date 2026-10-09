// /Script/Icarus.CaveLocation
// size 0x38, declared in Icarus/Source/Icarus/IcarusWorldSettings.h

USTRUCT()
struct FCaveLocation
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Location;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UCavePrefabAsset> Prefab;  // 0x0010, size 0x28
};
