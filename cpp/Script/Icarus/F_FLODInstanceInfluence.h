// /Script/Icarus.FLODInstanceInfluence
// size 0x20, declared in Icarus/Source/Icarus/Systems/FLOD/FLODInstanceInfluence.h

USTRUCT()
struct FFLODInstanceInfluence
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FFLODInstanceID InfluencedInstance;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 InfluenceLevelIndex;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FTimerHandle TimeoutHandle;  // 0x0018, size 0x8
};
