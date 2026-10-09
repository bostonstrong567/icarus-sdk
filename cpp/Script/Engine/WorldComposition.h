// /Script/Engine.WorldComposition
// Derives from: UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Engine/WorldComposition.h

UCLASS(Config=Engine)
class UWorldComposition : public UObject
{
public:
    UPROPERTY(Transient) TArray<ULevelStreaming*> TilesStreaming;  // 0x0048, size 0x10
    UPROPERTY(Config) double TilesStreamingTimeThreshold;  // 0x0058, size 0x8
    UPROPERTY(Config) bool bLoadAllTilesDuringCinematic;  // 0x0060, size 0x1
    UPROPERTY(Config) bool bRebaseOriginIn3DSpace;  // 0x0061, size 0x1
    UPROPERTY(Config) float RebaseOriginDistance;  // 0x0064, size 0x4
private:
    FString WorldRoot;  // 0x0028, not reflected
    TArray<FWorldCompositionTile,TSizedDefaultAllocator<32> > Tiles;  // 0x0038, not reflected
};
