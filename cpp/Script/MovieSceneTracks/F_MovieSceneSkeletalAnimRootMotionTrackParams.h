// /Script/MovieSceneTracks.MovieSceneSkeletalAnimRootMotionTrackParams
// size 0x30, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Tracks/MovieSceneSkeletalAnimationTrack.h

USTRUCT()
struct FMovieSceneSkeletalAnimRootMotionTrackParams
{
public:
    FFrameTime FrameTick;  // 0x0000, not reflected
    FFrameTime StartFrame;  // 0x0008, not reflected
    FFrameTime EndFrame;  // 0x0010, not reflected
    bool bRootMotionsDirty;  // 0x0018, not reflected
    TArray<FTransform,TSizedDefaultAllocator<32> > RootTransforms;  // 0x0020, not reflected
};
