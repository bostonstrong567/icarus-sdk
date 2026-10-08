// /Game/BP/Systems/Disaster/BP_DisasterController.BP_DisasterController_C
// Derives from: ADisasterController > AInfo > AActor > UObject
// size 0x43C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_DisasterController_C : public ADisasterController
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_FLODInfluence_VoxelCracker_C* FLODInfluence_VoxelCracker;  // 0x0238, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_FLODInfluence_Lightning_C* FLODInfluence_Lightning;  // 0x0240, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_FLODInfluence_TreeToppler_C* FLODInfluence_TreeToppler;  // 0x0248, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FBiomesEnum, FBiomeLightning> BiomeLightningMap;  // 0x0250, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LightningTreeStrikeRadius;  // 0x02A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LightningCosmeticMinDistance;  // 0x02A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LightningCosmeticMaxDistance;  // 0x02A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxActiveToppleTrees;  // 0x02AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ActiveToppleTrees;  // 0x02B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<ETreePrimitiveDetachContext, float> ToppleCandidateChance;  // 0x02B8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FBiomesEnum, FBiomeStormWindInfo> BiomeStormWindMap;  // 0x0308, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WindTreeToppleMaxRadius;  // 0x0358, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WindTreeToppleCloseRadius;  // 0x035C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinimumTreesRequiredToTopple;  // 0x0360, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LightningBlueprintMinDistance;  // 0x0364, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LightningBlueprintMaxDistance;  // 0x0368, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LightningHitTypeMaxRoll;  // 0x036C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChanceOfBlueprintLightning;  // 0x0370, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BuildingLightingChance_;  // 0x0374, size 0x4, named "BuildingLightingChance%"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TreeLightningChance_;  // 0x0378, size 0x4, named "TreeLightningChance%"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PlayerLightningChance_;  // 0x037C, size 0x4, named "PlayerLightningChance%"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream RandomStream;  // 0x0380, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<UIcarusWeatherAction*, FScriptedEventsRowHandle> ScheduledScriptedEvents;  // 0x0388, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FBiomesEnum, AScriptedEvent*> ActiveScriptedEvents;  // 0x03D8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTimerHandle> ToppledTreesCooldown;  // 0x0428, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TreeToppleCooldownTime;  // 0x0438, size 0x4

    UFUNCTION(BlueprintCallable) void BeginScriptedEvent(FScriptedEventsRowHandle Event, FBiomesRowHandle AssociatedBiome);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void CheckForNewLightningStrike();
    UFUNCTION(BlueprintCallable) void CheckForWindTreeTopples();
    UFUNCTION(BlueprintCallable) void DamageFISMVoxel(AActor* Attacker, AActor* Weapon, FHitResult HitInfo, int32 NumHits);  // parameters 0x9C
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void DropShipAtomiseFoliage(FVector Location, float Radius);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void DropShipSmashTrees(FVector Location, float Radius);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_BP_DisasterController(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindTreeToppleCandidatesInBiome(FBiomesEnum Biome, FBiomeStormWindInfo WindInfo);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) void GetUncoveredPlayer(TArray<ABP_IcarusPlayerCharacterSurvival_C*>& BiomeCharacters, ABP_IcarusPlayerCharacterSurvival_C*& TargetCharacter);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void IsLightningRodCloser(FVector TargetLocation, bool& LightningRod, AActor*& ChosenTarget);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void MakeToppleTreeCandidate(FFLODInstanceID Instance, ETreePrimitiveDetachContext Context, FVector ToppleDirection);  // parameters 0x20
    UFUNCTION(BlueprintCallable, NetMulticast) void Multicast_LightningStrike(TEnumAsByte<ELightningStrikeTarget> TargetType, FVector TargetLocation, AActor* TargetActor, FFLODInstanceID TargetFLODInstance);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void OnSeedUpdated(int32 Seed);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnWeatherActionCompleted(const FBiomesRowHandle& Biome, const FWeatherEventsRowHandle& Event);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void OnWeatherEventStarted(const FBiomesRowHandle& Biome, const FWeatherEventsRowHandle& Event);  // parameters 0x30
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void RollNextEventTime(float Min, float Max, int32& NextStrikeTime);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void Server_GenerateLightningStrike(FBiomesEnum LightningBiome);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void StartGeneratingLightning(float MinInterval, float MaxInterval, FBiomesEnum Biome);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void StartStormTreeToppling(FVector WindDirection, float MinInterval, float MaxInterval, float WindStrengthThreshold, FBiomesEnum Biome);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void StopGeneratingLightning(FBiomesEnum Biome);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void StopStormTreeToppling(FBiomesEnum Biome);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ToppleTree(FFLODInstanceID Instance, TreeToppleInfo ToppleInfo);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void TreeToppleCooldownEnded();
};
