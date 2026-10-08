// /Script/Icarus.LevelStreamingBinding
// Derives from: UObject
// size 0x50, declared in Icarus/Source/Icarus/TerrainAnchorSubsystem.h

UCLASS()
class ULevelStreamingBinding : public UObject
{
public:
    UPROPERTY(EditAnywhere) ULevelStreaming* StreamingLevel;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere) ALandscapeProxy* LevelLandscapeProxy;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere) FBox2D LevelBounds;  // 0x0038, size 0x14
    UPROPERTY(EditAnywhere) bool bLevelAnchorValid;  // 0x004C, size 0x1
    UPROPERTY(EditAnywhere) bool bIsGeneratedLevel;  // 0x004D, size 0x1

    UFUNCTION() void OnStreamingLevelHidden();
    UFUNCTION() void OnStreamingLevelLoaded();
    UFUNCTION() void OnStreamingLevelShown();
    UFUNCTION() void OnStreamingLevelUnloaded();

    // Virtual functions that start here:
    //   EvaluateAnchorState, Init, OnStreamingLevelUnloaded, TryCacheLevelBounds, TryCacheLevelObjects
};
