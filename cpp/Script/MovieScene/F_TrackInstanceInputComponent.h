// /Script/MovieScene.TrackInstanceInputComponent
// size 0x10, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/BuiltInComponentTypes.h

USTRUCT()
struct FTrackInstanceInputComponent
{
    UPROPERTY(Instanced) UMovieSceneSection* Section;  // 0x0000, size 0x8
    UPROPERTY() int32 OutputIndex;  // 0x0008, size 0x4
};
