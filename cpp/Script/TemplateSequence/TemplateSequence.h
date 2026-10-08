// /Script/TemplateSequence.TemplateSequence
// Derives from: UMovieSceneSequence > UMovieSceneSignedObject > UObject
// size 0x108, declared in Engine/Plugins/MovieScene/TemplateSequence/Source/TemplateSequence/Public/TemplateSequence.h

UCLASS(Config=Engine)
class UTemplateSequence : public UMovieSceneSequence
{
public:
    UPROPERTY(Instanced) UMovieScene* MovieScene;  // 0x0060, size 0x8
    UPROPERTY() TSoftClassPtr<AActor> BoundActorClass;  // 0x0068, size 0x28
    UPROPERTY() TSoftObjectPtr<AActor> BoundPreviewActor;  // 0x0090, size 0x28
    UPROPERTY() TMap<FGuid, FName> BoundActorComponents;  // 0x00B8, size 0x50
};
