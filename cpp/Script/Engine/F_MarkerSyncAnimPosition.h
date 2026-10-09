// /Script/Engine.MarkerSyncAnimPosition
// size 0x14, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimationAsset.h

USTRUCT()
struct FMarkerSyncAnimPosition
{
public:
    UPROPERTY() FName PreviousMarkerName;  // 0x0000, size 0x8
    UPROPERTY() FName NextMarkerName;  // 0x0008, size 0x8
    UPROPERTY() float PositionBetweenMarkers;  // 0x0010, size 0x4
};
