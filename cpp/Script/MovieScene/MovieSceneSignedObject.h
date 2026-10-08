// /Script/MovieScene.MovieSceneSignedObject
// Derives from: UObject
// size 0x50, declared in Engine/Source/Runtime/MovieScene/Public/MovieSceneSignedObject.h

UCLASS()
class UMovieSceneSignedObject : public UObject
{
public:
    UPROPERTY() FGuid Signature;  // 0x0028, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    UMovieSceneSignedObject::FOnSignatureChanged OnSignatureChangedEvent;  // 0x0038, private
};
