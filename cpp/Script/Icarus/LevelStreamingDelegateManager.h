// /Script/Icarus.LevelStreamingDelegateManager
// Derives from: UObject
// size 0x40, declared in Icarus/Source/Icarus/Navigation/IcarusNavigationSystem.h

UCLASS()
class ULevelStreamingDelegateManager : public UObject
{
public:
    UPROPERTY() ULevelStreaming* StreamingLevel;  // 0x0028, size 0x8
    UPROPERTY() FLevelStreamingStateUpdatedSignature OnLevelStreamingStateUpdated;  // 0x0030, size 0x10

    UFUNCTION() void OnLevelHidden();
    UFUNCTION() void OnLevelLoaded();
    UFUNCTION() void OnLevelShown();
    UFUNCTION() void OnLevelUnloaded();
    UFUNCTION() void OnStreamingLevelStateUpdated();
};
