// /Script/Icarus.FarmingGrowthState
// size 0x58, declared in Icarus/Source/Icarus/DataStructs/FarmingGrowthState.h

USTRUCT()
struct FFarmingGrowthState : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeToNextState;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UStaticMesh> StageMesh;  // 0x0020, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector MeshScale;  // 0x0048, size 0xC
};
