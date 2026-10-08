// /Script/Icarus.TransientDropshipInfo
// size 0x18, declared in Icarus/Source/Icarus/IcarusGameModeSurvival.h

USTRUCT()
struct FTransientDropshipInfo
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerControllerSurvival* PlayerController;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusDropShipSpawnLocator* SpawnLocator;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 GroupIndex;  // 0x0010, size 0x4
};
