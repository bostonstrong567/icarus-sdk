// /Script/VariantManagerContent.LevelVariantSetsActor
// Derives from: AActor > UObject
// size 0x288, declared in Engine/Plugins/Enterprise/VariantManagerContent/Source/VariantManagerContent/Public/LevelVariantSetsActor.h

UCLASS(Config=Engine)
class ALevelVariantSetsActor : public AActor
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSoftObjectPath LevelVariantSets;  // 0x0220, size 0x18
    UPROPERTY(Transient) TMap<TSubclassOf<UObject>, ULevelVariantSetsFunctionDirector*> DirectorInstances;  // 0x0238, size 0x50

    UFUNCTION(BlueprintCallable) ULevelVariantSets* GetLevelVariantSets(bool bLoad);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetLevelVariantSets(ULevelVariantSets* InVariantSets);  // parameters 0x8
    UFUNCTION(BlueprintCallable) bool SwitchOnVariantByIndex(int32 VariantSetIndex, int32 VariantIndex);  // parameters 0x9
    UFUNCTION(BlueprintCallable) bool SwitchOnVariantByName(FString VariantSetName, FString VariantName);  // parameters 0x21
};
