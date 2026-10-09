// /Script/Icarus.IcarusItemConstructionParameters
// size 0x28, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/IcarusItem.generated.h

USTRUCT()
struct FIcarusItemConstructionParameters
{
public:
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool bSimulatePhysics;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadOnly) FString MeshAssetPath;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FName CollisionProfile;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) TEnumAsByte<EComponentMobility> Mobility;  // 0x0020, size 0x1
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool bHiddenInGame;  // 0x0021, size 0x1
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool bDisableItemStaticDataTraits;  // 0x0022, size 0x1
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool bReplicateStatArray;  // 0x0023, size 0x1
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool bForceNoReplication;  // 0x0024, size 0x1
};
