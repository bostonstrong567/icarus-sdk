// /Script/MovieScene.MovieSceneTrackInstanceInput
// size 0x10, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/TrackInstance/MovieSceneTrackInstance.h

USTRUCT()
struct FMovieSceneTrackInstanceInput
{
public:
    UPROPERTY(Instanced) UMovieSceneSection* Section;  // 0x0000, size 0x8
    UE::MovieScene::FInstanceHandle InstanceHandle;  // 0x0008, not reflected
};
