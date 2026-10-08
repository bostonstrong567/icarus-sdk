// /Script/LevelSequence.LevelSequence
// Derives from: UMovieSceneSequence > UMovieSceneSignedObject > UObject
// size 0x1C8, declared in Engine/Source/Runtime/LevelSequence/Public/LevelSequence.h

UCLASS(Config=Engine)
class ULevelSequence : public UMovieSceneSequence, public IInterface_AssetUserData
{
public:
    UPROPERTY(Instanced) UMovieScene* MovieScene;  // 0x0068, size 0x8
    UPROPERTY() FLevelSequenceObjectReferenceMap ObjectReferences;  // 0x0070, size 0x50
    UPROPERTY() FLevelSequenceBindingReferences BindingReferences;  // 0x00C0, size 0xA0
    UPROPERTY(Deprecated) TMap<FString, FLevelSequenceObject> PossessedObjects;  // 0x0160, size 0x50
    UPROPERTY() TSubclassOf<UObject> DirectorClass;  // 0x01B0, size 0x8
    UPROPERTY(EditAnywhere) TArray<UAssetUserData*> AssetUserData;  // 0x01B8, size 0x10

    UFUNCTION(BlueprintCallable) UObject* CopyMetaData(UObject* InMetaData);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) UObject* FindMetaDataByClass(TSubclassOf<UObject> InClass) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) UObject* FindOrAddMetaDataByClass(TSubclassOf<UObject> InClass);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RemoveMetaDataByClass(TSubclassOf<UObject> InClass);  // parameters 0x8

    // Virtual functions that start here:
    //   Initialize
};
