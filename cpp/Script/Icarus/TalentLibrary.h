// /Script/Icarus.TalentLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Talents/TalentFunctionLibrary.h

UCLASS(MinimalAPI)
class UTalentLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static FString GenerateSearchStringForBlueprintTalent(FTalentsRowHandle Talent);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static FString GenerateSearchStringForPlayerTalent(FTalentsRowHandle Talent);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static FString GenerateSearchStringForProspectTalent(FTalentsRowHandle Talent);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static FString GenerateSearchStringForWorkshopTalent(FTalentsRowHandle Talent);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentArchetypesRowHandle GetArchetype(FTalentTreesRowHandle TalentTree);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentModelsRowHandle GetModel(FTalentArchetypesRowHandle Archetype);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentModelViewsRowHandle GetModelView(FTalentModelsRowHandle Model);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentsRowHandle GetRequiredCharacterTalentForBlueprintUnlock(FTalentsRowHandle Talent);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static FProcessorRecipesRowHandle GetTalentRecipeSlow(FTalentsRowHandle Talent);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTalentTreesRowHandle GetTalentTree(FTalentsRowHandle Talent);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FTalentsRowHandle> GetTalentsForTree(FTalentTreesRowHandle TalentTree);  // parameters 0x28
};
