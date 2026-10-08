// /Script/LevelSequence.LevelSequenceBurnInOptions
// Derives from: UObject
// size 0x50, declared in Engine/Source/Runtime/LevelSequence/Public/LevelSequenceActor.h

UCLASS(Config=EditorPerProjectUserSettings)
class ULevelSequenceBurnInOptions : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bUseBurnIn;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FSoftClassPath BurnInClass;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) ULevelSequenceBurnInInitSettings* Settings;  // 0x0048, size 0x8

    UFUNCTION(BlueprintCallable) void SetBurnIn(FSoftClassPath InBurnInClass);  // parameters 0x18
};
