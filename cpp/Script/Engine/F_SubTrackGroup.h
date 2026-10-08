// /Script/Engine.SubTrackGroup
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrack.h

USTRUCT()
struct FSubTrackGroup
{
    UPROPERTY() FString GroupName;  // 0x0000, size 0x10
    UPROPERTY() TArray<int32> TrackIndices;  // 0x0010, size 0x10
    UPROPERTY() uint8 bIsCollapsed : 1;  // 0x0020, mask 0x01
    UPROPERTY(Transient) uint8 bIsSelected : 1;  // 0x0020, mask 0x02
};
