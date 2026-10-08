// /Script/MovieScene.MovieSceneSpawnable
// size 0x90, declared in Engine/Source/Runtime/MovieScene/Public/MovieSceneSpawnable.h

USTRUCT()
struct FMovieSceneSpawnable
{
    UPROPERTY(EditAnywhere) FTransform SpawnTransform;  // 0x0000, size 0x30
    UPROPERTY(EditAnywhere) TArray<FName> Tags;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere) bool bContinuouslyRespawn;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere) bool bNetAddressableName;  // 0x0041, size 0x1
    UPROPERTY(EditAnywhere) bool bEvaluateTracksWhenNotSpawned;  // 0x0042, size 0x1
    UPROPERTY() FGuid Guid;  // 0x0044, size 0x10
    UPROPERTY() FString Name;  // 0x0058, size 0x10
    UPROPERTY() UObject* ObjectTemplate;  // 0x0068, size 0x8
    UPROPERTY() TArray<FGuid> ChildPossessables;  // 0x0070, size 0x10
    UPROPERTY() ESpawnOwnership Ownership;  // 0x0080, size 0x1
    UPROPERTY() FName LevelName;  // 0x0084, size 0x8
};
