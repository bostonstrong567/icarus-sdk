// /Script/Icarus.WorldData
// size 0x160, declared in Icarus/Source/Icarus/DataStructs/WorldData.h

USTRUCT()
struct FWorldData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString TerrainName;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString FileTag;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UWorld> MainLevel;  // 0x0038, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UWorld>> HeightmapLevels;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UWorld>> GeneratedLevels;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UWorld> GeneratedVistaLevel;  // 0x0080, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UWorld>> DeveloperLevels;  // 0x00A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FBoxSphereBounds> GridBounds;  // 0x00B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FWorldCollection> WorldCollections;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMinimapData MinimapData;  // 0x00D8, size 0x38
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, FDropGroupData> DropGroups;  // 0x0110, size 0x50
};
