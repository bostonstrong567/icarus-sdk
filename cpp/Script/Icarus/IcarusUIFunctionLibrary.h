// /Script/Icarus.IcarusUIFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/UI/IcarusUIFunctionLibrary.h

UCLASS()
class UIcarusUIFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static bool FilterSearchSignIcons(const TArray<USignIconListItem*>& AllIcons, FString FilterQuery, TArray<USignIconListItem*>& MatchingListItems, bool bUseFuzzySearch);  // parameters 0x32
    UFUNCTION(BlueprintCallable) static bool GetMapIconsNeedingUpdate(const TArray<UIcarusMapIconComponent*>& CurrentMapIcons, const TArray<UIcarusCompassIcon*>& CurrentCompassIcons, TArray<UIcarusMapIconComponent*>& NewComponents, TArray<UIcarusCompassIcon*>& CompassIconsPendingCleanup);  // parameters 0x41
    UFUNCTION(BlueprintCallable) static void HighlightTalents(UTalentTreeWidget* TalentTree, FString FilterQuery);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static float LevenshteinFuzzyStringMatch(FString SearchString, FString TargetString);  // parameters 0x24
};
