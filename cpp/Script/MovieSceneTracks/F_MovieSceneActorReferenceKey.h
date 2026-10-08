// /Script/MovieSceneTracks.MovieSceneActorReferenceKey
// size 0x28, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneActorReferenceSection.h

USTRUCT()
struct FMovieSceneActorReferenceKey
{
    UPROPERTY(EditAnywhere) FMovieSceneObjectBindingID Object;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere) FName ComponentName;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere) FName SocketName;  // 0x0020, size 0x8
};
