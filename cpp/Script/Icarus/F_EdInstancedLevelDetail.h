// /Script/Icarus.EdInstancedLevelDetail
// size 0xA8, declared in Icarus/Source/Icarus/World/InstancedLevels/InstancedLevelsFunctionLibrary.h

USTRUCT()
struct FEdInstancedLevelDetail
{
    UPROPERTY(BlueprintReadOnly) FInstancedMapData Data;  // 0x0000, size 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ShortenedName;  // 0x0080, size 0x10
    UPROPERTY(BlueprintReadOnly) bool bIsUpdate;  // 0x0090, size 0x1
    UPROPERTY(BlueprintReadOnly) FString LogDetail;  // 0x0098, size 0x10
};
