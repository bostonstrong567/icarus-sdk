// /Script/DatasmithContent.DatasmithImportedSequencesActor
// Derives from: AActor > UObject
// size 0x230, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/DatasmithImportedSequencesActor.h

UCLASS(Config=Engine)
class ADatasmithImportedSequencesActor : public AActor
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ULevelSequence*> ImportedSequences;  // 0x0220, size 0x10

    UFUNCTION(BlueprintCallable) void PlayLevelSequence(ULevelSequence* SequenceToPlay);  // parameters 0x8
};
