// /Script/Engine.AnimSequenceTrackContainer
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimSequence.h

USTRUCT()
struct FAnimSequenceTrackContainer
{
public:
    UPROPERTY() TArray<FRawAnimSequenceTrack> AnimationTracks;  // 0x0000, size 0x10
    UPROPERTY() TArray<FName> TrackNames;  // 0x0010, size 0x10
};
