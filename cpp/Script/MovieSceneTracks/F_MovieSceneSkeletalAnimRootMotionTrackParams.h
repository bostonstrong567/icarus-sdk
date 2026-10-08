// /Script/MovieSceneTracks.MovieSceneSkeletalAnimRootMotionTrackParams
// size 0x30, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Tracks/MovieSceneSkeletalAnimationTrack.h

USTRUCT()
struct FMovieSceneSkeletalAnimRootMotionTrackParams
{

    // Not reflected:
    FFrameTime FrameTick;  // 0x0000
    FFrameTime StartFrame;  // 0x0008
    FFrameTime EndFrame;  // 0x0010
    bool bRootMotionsDirty;  // 0x0018
    TArray<FTransform,TSizedDefaultAllocator<32> > RootTransforms;  // 0x0020
};
