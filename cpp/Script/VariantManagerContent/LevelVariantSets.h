// /Script/VariantManagerContent.LevelVariantSets
// Derives from: UObject
// size 0x90, declared in Engine/Plugins/Enterprise/VariantManagerContent/Source/VariantManagerContent/Public/LevelVariantSets.h

UCLASS()
class ULevelVariantSets : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TSubclassOf<UObject> DirectorClass;  // 0x0028, size 0x8
    UPROPERTY() TArray<UVariantSet*> VariantSets;  // 0x0030, size 0x10
    TMap<UWorld *,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld *,TWeakObjectPtr<UObject,FWeakObjectPtr>,0> > WorldToDirectorInstance;  // 0x0040, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumVariantSets();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) UVariantSet* GetVariantSet(int32 VariantSetIndex);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) UVariantSet* GetVariantSetByName(FString VariantSetName);  // parameters 0x18
};
