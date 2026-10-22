// /Script/Icarus.IcarusUIFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/UI/IcarusUIFunctionLibrary.h

UCLASS()
class UIcarusUIFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static bool FilterSearchSignIcons(const TArray<USignIconListItem*>& AllIcons, FString FilterQuery, TArray<USignIconListItem*>& MatchingListItems, bool bUseFuzzySearch);  // parameters 0x32
    UFUNCTION(BlueprintCallable) static bool GetMapIconsNeedingUpdate(const TArray<UIcarusMapIconComponent*>& CurrentMapIcons, const TArray<UIcarusCompassIcon*>& CurrentCompassIcons, TArray<UIcarusMapIconComponent*>& NewComponents, TArray<UIcarusCompassIcon*>& CompassIconsPendingCleanup);  // parameters 0x41
    UFUNCTION(BlueprintCallable) static FTalentsRowHandle HighlightTalents(UTalentTreeWidget* TalentTree, FString FilterQuery);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static float LevenshteinFuzzyStringMatch(FString SearchString, FString TargetString);  // parameters 0x24
    UFUNCTION(BlueprintCallable) static void OpenTechTreeToTalent(UObject* WorldContextObject, const FTalentsRowHandle& Talent, const FText& SearchText);  // parameters 0x38
};
