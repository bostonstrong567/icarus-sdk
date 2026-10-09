// /Game/BP/World/Prefab/BP_ActorPrefabFunctionLibrary.BP_ActorPrefabFunctionLibrary_C
// Derives from: UActorPrefabFunctionLibrary > UObject
// size 0x30, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_ActorPrefabFunctionLibrary_C : public UActorPrefabFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) AActor* DeserializeCaveInstance(const TArray<FPrefabTransform>& Volumes, const TArray<FPrefabTransform>& Entrances, const FTransform& Origin);  // parameters 0x58
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) AActor* DeserializePrefabActorClass(const FPrefabActorClass& ActorData, const FTransform& Origin);  // parameters 0x78
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) AActor* DeserializePrefabCaveCreatureSpawns(const TMap<TSubclassOf<AActor>, FCaveSpawnConfig>& CaveSpawnConfig, UActorPrefabAsset* CavePrefab, const FTransform& Origin);  // parameters 0x98
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) AActor* DeserializePrefabCaveLight(const FPrefabCaveLight& CaveLightData, const FTransform& Origin);  // parameters 0xB8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) AActor* DeserializePrefabLake(const FPrefabLake& LakeData, const FTransform& Origin);  // parameters 0xA8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) AActor* DeserializePrefabLavaFlowPoint(const FPrefabLavaFlowPoint& LavaFlowPointData, const FTransform& Origin);  // parameters 0x88
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) AActor* DeserializePrefabStaticMesh(const FPrefabStaticMesh& MeshData, const FTransform& Origin);  // parameters 0xE8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FTransform DeserializePrefabTransform(const FPrefabTransform& TransformData, const FTransform& Origin);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) AActor* DeserializePrefabWaterfall(const FPrefabWaterfall& WaterfallData, const FTransform& Origin);  // parameters 0xB8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSpawnScaleForCreatureType(TEnumAsByte<ECreatureSpawnType> CreatureType, FVector& SpawnScale) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool SerializePrefabActorClass(AActor* Actor, const FTransform& Origin, FPrefabActorClass& ActorData);  // parameters 0x81
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool SerializePrefabCaveCreatureSpawns(const TArray<AActor*>& CreatureSpawns, const FTransform& Origin, const TMap<TSubclassOf<AActor>, FVector2D>& PerActorMinMaxSpawnCounts, TMap<TSubclassOf<AActor>, FCaveSpawnConfig>& CaveSpawnConfig);  // parameters 0xE1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool SerializePrefabCaveLight(AActor* CaveLight, const FTransform& Origin, FPrefabCaveLight& CaveLightData);  // parameters 0xC1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool SerializePrefabLake(AActor* Lake, const FTransform& Origin, FPrefabLake& LakeData);  // parameters 0xB1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool SerializePrefabLavaFlowPoint(AActor* LavaFlowPoint, const FTransform& Origin, FPrefabLavaFlowPoint& LavaFlowPointData);  // parameters 0x91
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool SerializePrefabStaticMesh(UStaticMeshComponent* MeshComponent, const FTransform& Origin, FPrefabStaticMesh& MeshData);  // parameters 0xF1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool SerializePrefabTransform(AActor* Actor, const FTransform& Origin, FPrefabTransform& TransformData);  // parameters 0x71
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool SerializePrefabWaterfall(AActor* Waterfall, const FTransform& Origin, FPrefabWaterfall& WaterfallData);  // parameters 0xC1
};
