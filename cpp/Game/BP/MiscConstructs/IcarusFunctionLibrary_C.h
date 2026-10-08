// /Game/BP/MiscConstructs/IcarusFunctionLibrary.IcarusFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UIcarusFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddReverseLinesToVectorPairArray(TArray<VectorPair>& VectorPairs, UObject* __WorldContext, TArray<VectorPair>& PairsWithReversed);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void FilterActorListBySoftClasses(TArray<AActor*>& InActors, TArray<TSoftClassPtr<AActor>>& InClassFilter, UObject* __WorldContext, TArray<AActor*>& OutActors);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static void FormatRawSecondsToTimeLength(int32 SecondsInput, UObject* __WorldContext, FString& Formatted);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void FormatRawSecondsToTimeLengthDigital(int32 SecondsInput, UObject* __WorldContext, TArray<FString>& Time);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void FormatTimeLength(int32 SecondsInput, UObject* __WorldContext, FString& Formatted);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void FormatTimeLengthDigital(int32 SecondsInput, UObject* __WorldContext, TArray<FString>& Time);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void Get_Custom_Item_Icon(FItemData ItemData, UObject* __WorldContext, TSoftObjectPtr<UTexture2D>& Icon, TSoftObjectPtr<UTexture2D>& AlphaOverride);  // parameters 0x248, named "Get Custom Item Icon"
    UFUNCTION(BlueprintCallable) static void Get_Icon_or_Missing(TSoftObjectPtr<UTexture2D> Icon, UObject* __WorldContext, TSoftObjectPtr<UTexture2D>& Output);  // parameters 0x58, named "Get Icon or Missing"
    UFUNCTION(BlueprintCallable) void GetCollectableNoteRow(const FItemData& Item, UObject* WorldContextObject, UObject* __WorldContext, FCollectableNotesRowHandle& NoteRow);  // parameters 0x218
    UFUNCTION(BlueprintCallable, BlueprintPure) static AIcarusPlayerController* GetIcarusController(int32 Index, UObject* __WorldContext, bool& Valid);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static void GetInteractionsSupportingMountedState(UInteractableComponent* Interactable, UObject* __WorldContext, bool& HasAny, TArray<FInteractionsRowHandle>& WorldPressInteractions, TArray<FInteractionsRowHandle>& WorldHoldInteractions, TArray<FInteractionsRowHandle>& WorldAltPressInteractions, TArray<FInteractionsRowHandle>& WorldAltHoldInteractions);  // parameters 0x58
    UFUNCTION(BlueprintCallable) static void GetItemIcon(FItemData ItemData, UObject* __WorldContext, TSoftObjectPtr<UTexture2D>& Icon);  // parameters 0x220
    UFUNCTION(BlueprintCallable) static void GetItemIcon_Static(FItemStaticData ItemStatic, UObject* __WorldContext, TSoftObjectPtr<UTexture2D>& Icon);  // parameters 0x4B8
    UFUNCTION(BlueprintCallable) static void GetItemName(FItemData ItemData, UObject* __WorldContext, FText& Name);  // parameters 0x210
    UFUNCTION(BlueprintCallable) static void GetItemName_Static(FItemStaticData ItemStatic, UObject* __WorldContext, FText& Name);  // parameters 0x4A8
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetLocalSelectedChrSlot(UObject* __WorldContext, int32& ChrSlot);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void GetPlayerIdentityData(int32 Index, UObject* __WorldContext, FPlayerIdentityData& PlayerIdentity);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetResourceColour(FIcarusResourcesEnum Type, UObject* __WorldContext, FColor& Color);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetResourceContainer(FIcarusResourcesEnum Type, UObject* __WorldContext, TSoftObjectPtr<UMaterialInstance>& Container_Icon);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static TSoftObjectPtr<UTexture2D> GetResourceImage(FIcarusResourcesEnum Type, UObject* __WorldContext);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText GetResourceName(FIcarusResourcesEnum Type, UObject* __WorldContext);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetResourceUnit(FIcarusResourcesEnum Type, UObject* __WorldContext, FText& Unit);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void Is_Actor_Required_To_Be_Outside(AActor* Actor, UObject* __WorldContext, bool& MustBeOutside);  // parameters 0x11, named "Is Actor Required To Be Outside"
    UFUNCTION(BlueprintCallable) static void IsActorAffectedByShelter(AActor* Actor, UObject* __WorldContext, bool& IsAffected) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable) static void IsItemAffectedByShelter(FItemData& Actor, UObject* __WorldContext, bool& IsAffected) const;  // parameters 0x1F9
    UFUNCTION(BlueprintCallable) static void MakeItem(FMetaItem MetaItem, UObject* __WorldContext, FItemData& Item);  // parameters 0x238
    UFUNCTION(BlueprintCallable) static void PrintDebug(FString Category, FString Log, UObject* __WorldContext);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void ResolveSoftClassReferenceArray(TArray<TSoftClassPtr<AActor>>& InSoftReferences, UObject* __WorldContext, TArray<TSubclassOf<AActor>>& OutClasses);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static void RoundVector(FVector Vector, UObject* __WorldContext, FVector& Rounded);  // parameters 0x24
    UFUNCTION(BlueprintCallable) static void SetAllLightsHiddenInGame(bool HiddenInGame, TArray<AActor*>& ActorIgnoreList, TArray<ULightComponent*>& ComponentIgnoreList, UObject* __WorldContext);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void ShouldItemBePlacedOutside(FItemData Item, UObject* __WorldContext, bool& PlaceOutside);  // parameters 0x1F9
    UFUNCTION(BlueprintCallable) static void UpdatePlayerComfortLevel(UObject* __WorldContext, int32& Comfort, int32& SleepDuration, int32& SleepEffectiveness);  // parameters 0x14
};
