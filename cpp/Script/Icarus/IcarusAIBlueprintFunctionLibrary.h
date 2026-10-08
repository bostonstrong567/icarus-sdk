// /Script/Icarus.IcarusAIBlueprintFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/AI/IcarusAIBlueprintFunctionLibrary.h

UCLASS()
class UIcarusAIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void BlockBiomeDynamicSpawn(UObject* WorldContext, const FBiomesRowHandle& Biome, bool bBlock);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static void ConfigureSightPerceptionAutoDetectionRange(UAIPerceptionComponent* PerceptionComponent, float AutoSuccessRangeFromLastSeenLocation);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void ConfigureSightPerceptionSense(UAIPerceptionComponent* PerceptionComponent, float MaxAge, float SightRadius, float LoseSightRadius, float PeripheralVisionAngle, float AutoSuccessRangeFromLastSeenLocation, float PointOfViewBackwardOffset, float NearClippingRadius);  // parameters 0x24
    UFUNCTION(BlueprintCallable) static void CopyAIPerceptionEventsToTarget(AController* SourceController, AController* TargetController, TSubclassOf<UAISense> SenseOverride);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static FNavAgentProperties GetBestNavPropertiesForAgent(const FNavAgentProperties& InAgentProperties);  // parameters 0x60
    UFUNCTION(BlueprintCallable) static UObject* GetBestTargetableObject(UObject* TargetObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static AActor* GetBestValidEnemyTarget(AIcarusNPCGOAPController* Controller);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static bool GetBlockBiomeDynamicSpawn(UObject* WorldContext, const FBiomesRowHandle& Biome);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static AActor* GetClosestValidEnemyTarget(AIcarusNPCGOAPController* Controller);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static bool GetLastPerceivedTargetLocation(AAIController* Controller, AActor* Target, FVector& LastSensedLocation, FAIStimulus& LastSensedStimulus, bool bUseExactStimulusLocation, bool bProjectResult, TEnumAsByte<ETraceTypeQuery> TraceChannel, FVector ProjectionExtent);  // parameters 0x69
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetNPCStatWithDefaultValue(AActor* SpawnableAI, FStatsEnum Stat, int32 DefaultValue);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void GetNearbyActorsOfAIType(UObject* WorldContextObject, TArray<AActor*>& FoundActors, FAISetupRowHandle NPCType, FVector WorldLocation, float NearbyDistance);  // parameters 0x40
    UFUNCTION(BlueprintCallable) static void GetNearbyActorsOfAITypeWithContext(UObject* WorldContextObject, TArray<AActor*>& FoundActors, FAISetupRowHandle NPCType, FVector WorldLocation, float NearbyDistance);  // parameters 0x40
    UFUNCTION(BlueprintCallable) static bool GetNearbyTargetableActors(AActor* SelfTargetable, ERelationshipType RelationshipType, TArray<AActor*>& NearbyTargetableActors, bool bFilterByRelationship, float MaxDistance);  // parameters 0x29
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool GetProspectSpawnConfig(UObject* WorldContextObject, FAISpawnConfigData& SpawnConfig);  // parameters 0xB9
    UFUNCTION(BlueprintCallable) static UAISenseConfig* GetSenseConfig(UAIPerceptionComponent* PerceptionComponent, TSubclassOf<UAISense> Sense);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static bool GetSpawnPosInLakes(AActor* AroundPlayer, const FGameplayTagQuery& TagQuery, float MaxDist, const TArray<AActor*>& SpawnedAI, FVector& SpawnPosOut);  // parameters 0x75
    UFUNCTION(BlueprintCallable) static bool InitAISetup(AActor* AI, const FAISetupRowHandle& AISetup, const FEpicCreaturesRowHandle& EpicCreatureSetup);  // parameters 0x39
    UFUNCTION(BlueprintCallable) static bool InitGrowthStats(AActor* AI);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static bool IsAIStimulusOfType(const FAIStimulus& Stimulus, TSubclassOf<UAISense> Type);  // parameters 0x49
    UFUNCTION(BlueprintCallable) static bool IsLocationWithinSpawnBlockerRadius(UObject* WorldContextObject, FVector Location, bool bCheckForAttractor);  // parameters 0x16
    UFUNCTION(BlueprintCallable) static bool IsTargetAlive(UObject* TargetObject);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static bool IsTargetHidden(UObject* TargetObject);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void LogMountDebugInfo(UObject* WorldContextObject, AActor* AI, FString Reason);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void PauseLogic(UBrainComponent* BrainComp, FString Reason);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void ResumeLogic(UBrainComponent* BrainComp, FString Reason);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static bool SetBaseLevel(AActor* AI, int32 Level);  // parameters 0xD
    UFUNCTION(BlueprintCallable) static AActor* SpawnNewAI(UObject* WorldContextObject, const FAISetupRowHandle& AISetup, const FEpicCreaturesRowHandle& EpicCreatureSetup, FTransform SpawnTransform, int32 BaseLevel, ESpawnActorCollisionHandlingMethod CollisionHandlingMethod, AActor* Owner, APawn* Instigator, int32 ForcedUID);  // parameters 0x98
};
