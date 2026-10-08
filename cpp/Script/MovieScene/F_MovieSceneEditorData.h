// /Script/MovieScene.MovieSceneEditorData
// size 0xF0, declared in Engine/Source/Runtime/MovieScene/Public/MovieScene.h

USTRUCT()
struct FMovieSceneEditorData
{
    UPROPERTY() TMap<FString, FMovieSceneExpansionState> ExpansionStates;  // 0x0000, size 0x50
    UPROPERTY() TArray<FString> PinnedNodes;  // 0x0050, size 0x10
    UPROPERTY() double ViewStart;  // 0x0060, size 0x8
    UPROPERTY() double ViewEnd;  // 0x0068, size 0x8
    UPROPERTY() double WorkStart;  // 0x0070, size 0x8
    UPROPERTY() double WorkEnd;  // 0x0078, size 0x8
    UPROPERTY(Deprecated) TSet<FFrameNumber> MarkedFrames;  // 0x0080, size 0x50
    UPROPERTY(Deprecated) FFloatRange WorkingRange;  // 0x00D0, size 0x10
    UPROPERTY(Deprecated) FFloatRange ViewRange;  // 0x00E0, size 0x10
};
