// /Game/BP/AI/BP_MountFunctionLibrary.BP_MountFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_MountFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void CanBeFertilized(AActor* Male, AActor* PotentialFemale, UObject* __WorldContext, bool& CanFertilize);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static void CanEvolve(AIcarusCharacter* Character, FItemData Item, UObject* __WorldContext, bool& bCanInject);  // parameters 0x201
    UFUNCTION(BlueprintCallable) static void CanFeedSerum(AIcarusCharacter* Character, FItemData Item, UObject* __WorldContext, bool& bCanFeed);  // parameters 0x201
    UFUNCTION(BlueprintCallable) static void FindAnimalToFertalize(AActor* Male, float MaxDistance, UObject* __WorldContext, AActor*& Female);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void FindNearbyWaterTrough(APawn* Pawn, const FVector& AroundLocation, float MaxDistance, UObject* __WorldContext, AIcarusActor*& Item, bool& Success);  // parameters 0x29
    UFUNCTION(BlueprintCallable) static void FindValidFoodContainer(APawn* Pawn, FVector AroundLocation, float MaxDistance, FTagQueriesRowHandle ContainerQuery, bool bIgnoreUnreachable, bool SortByPathCost, bool OnlyAcceptUnshelteredContainers, bool AvoidNearbyPlayers, UObject* __WorldContext, AIcarusActor*& ContainerActor, UInventory*& Inventory, bool& Success);  // parameters 0x51
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetBestBoneToAttachRopeTo(ACharacter* Target, UObject* __WorldContext, FName& BestBoneOrSocket);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetCreatureTypeFromMountData(FMountsRowHandle Mount_Data, UObject* __WorldContext, FText& Creature_Name);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static void GetMountParent(AIcarusCharacter* MountCharacter, UObject* __WorldContext, AActor*& ParentActor, bool& Success) const;  // parameters 0x19
    UFUNCTION(BlueprintCallable) static EMountCombatBehaviourState GetNextSupportedMountCombatState(AIcarusMountCharacter* Target, UObject* __WorldContext);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static EMountMovementBehaviourState GetNextSupportedMountMovementState(AIcarusMountCharacter* Target, UObject* __WorldContext);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static void IsLocationFreeFromHostileTargets(APawn* Owner, FVector WorldLocation, UObject* __WorldContext, bool& FreeFromHostiles);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static void IsMount(AIcarusMountCharacter* MountCharacter, UObject* __WorldContext, bool& IsMount) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static void IsPet(AIcarusMountCharacter* MountCharacter, UObject* __WorldContext, bool& IsPet) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable) static bool IsVehicle(AIcarusCharacter* Target, UObject* __WorldContext) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable) static void SendBirthChatMessage(TScriptInterface<ISpawnableAI> Mother, UObject* __WorldContext);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void SendDeathChatMessage(TScriptInterface<ISpawnableAI> SpawnableAI, bool IsJuvenile, UObject* __WorldContext);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void SendFertalizedChatMessage(TScriptInterface<ISpawnableAI> Mother, UObject* __WorldContext);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void SetDesiredMountCombatState(AIcarusCharacter* MountCharacter, EMountCombatBehaviourState CombatBehaviour, UObject* __WorldContext);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void SetDesiredMountConsumptionState(AIcarusCharacter* MountCharacter, EMountConsumptionBehaviourState ConsumptionBehaviour, UObject* __WorldContext);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void SetDesiredMountGrazingState(AIcarusCharacter* MountCharacter, EMountGrazingBehaviourState GrazingBehaviour, UObject* __WorldContext);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void SetDesiredMountMovementState(AIcarusCharacter* MountCharacter, EMountMovementBehaviourState MovementBehaviour, UObject* __WorldContext);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void SetMountParent(AIcarusCharacter* MountCharacter, AActor* ParentActor, UObject* __WorldContext);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void SetNearbyTamesCombatState(EMountCombatBehaviourState NewCombatBehaviour, FVector Origin, int32 NearbyRadius, AIcarusPlayerCharacter* Player, UObject* __WorldContext);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void SetNearbyTamesMovementState(EMountMovementBehaviourState NewMovementBehaviour, FVector Origin, int32 NearbyRadius, AIcarusPlayerCharacter* Player, UObject* __WorldContext);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void TameConsumeFoodItem(AIcarusCharacter* TameCharacter, FItemData Item, float NutritionMultiplier, UObject* __WorldContext, bool& Success);  // parameters 0x209
    UFUNCTION(BlueprintCallable) static void UnloadMountActors(TArray<AIcarusMountCharacter*>& Mounts, UObject* __WorldContext);  // parameters 0x18
};
