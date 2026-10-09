// /Script/MovieScene.MovieSceneSignedObject
// Derives from: UObject
// size 0x50, declared in Engine/Source/Runtime/MovieScene/Public/MovieSceneSignedObject.h

UCLASS()
class UMovieSceneSignedObject : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FGuid Signature;  // 0x0028, size 0x10
    UMovieSceneSignedObject::FOnSignatureChanged OnSignatureChangedEvent;  // 0x0038, not reflected
};
