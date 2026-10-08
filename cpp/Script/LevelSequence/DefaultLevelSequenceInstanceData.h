// /Script/LevelSequence.DefaultLevelSequenceInstanceData
// Derives from: UObject
// size 0x70, declared in Engine/Source/Runtime/LevelSequence/Public/DefaultLevelSequenceInstanceData.h

UCLASS()
class UDefaultLevelSequenceInstanceData : public UObject, public IMovieSceneTransformOrigin
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* TransformOriginActor;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform TransformOrigin;  // 0x0040, size 0x30
};
