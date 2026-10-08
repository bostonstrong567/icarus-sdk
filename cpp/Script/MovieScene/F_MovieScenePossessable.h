// /Script/MovieScene.MovieScenePossessable
// size 0x48, declared in Engine/Source/Runtime/MovieScene/Public/MovieScenePossessable.h

USTRUCT()
struct FMovieScenePossessable
{
    UPROPERTY(EditAnywhere) TArray<FName> Tags;  // 0x0000, size 0x10
    UPROPERTY() FGuid Guid;  // 0x0010, size 0x10
    UPROPERTY() FString Name;  // 0x0020, size 0x10
    UPROPERTY() TSubclassOf<UObject> PossessedObjectClass;  // 0x0030, size 0x8
    UPROPERTY() FGuid ParentGuid;  // 0x0038, size 0x10
};
