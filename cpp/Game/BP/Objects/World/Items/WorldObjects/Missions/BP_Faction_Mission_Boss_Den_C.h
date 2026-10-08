// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Faction_Mission_Boss_Den.BP_Faction_Mission_Boss_Den_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x430, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Faction_Mission_Boss_Den_C : public ABP_WorldObject_C, public IBP_RetreatTargetInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ExitPoint;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusNavigationDirtier* IcarusNavigationDirtier;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Den_Plane1;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CF_Wolf_Den_Bones02;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CF_Wolf_Den_Rocks;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CF_Wolf_Den_Floor;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CF_Wolf_Den_Bones03;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UMaterialBillboardComponent* EyeGlowR;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UMaterialBillboardComponent* EyeGlowL;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* EyeContainer;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* EntryPoint;  // 0x0390, size 0x8
    UPROPERTY() float EmergeTimeline_GlowingEyeOpacity_58999D4B43A8E713CAE6C3BD0B8A2B52;  // 0x0398, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> EmergeTimeline__Direction_58999D4B43A8E713CAE6C3BD0B8A2B52;  // 0x039C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* EmergeTimeline;  // 0x03A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* EyeGlow;  // 0x03A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName OpacityParam;  // 0x03B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Faction_Mission_Boss_Den_C*> SpawnLocations;  // 0x03B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName HostileTargetLocationKey;  // 0x03C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NearbyPlayerRadius;  // 0x03D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumberOfSpawnEventsPerEmerge;  // 0x03D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FollowerWolvesPerPlayer;  // 0x03D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RemainingSpawns;  // 0x03DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TimeBetweenSpawnEvents;  // 0x03E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastFollowerSpawnTime;  // 0x03E4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaximumFollowerCountPerPlayer;  // 0x03E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinimumTimeBetweenFollowerSpawns;  // 0x03EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FollowerIdleLifetime;  // 0x03F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PerEventSpawn;  // 0x03F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle FollowerWolfAISetup;  // 0x03F8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AIcarusNPCGOAPCharacter*> Followers;  // 0x0410, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* BossScaling;  // 0x0420, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* PreEmergeFMODEvent;  // 0x0428, size 0x8

    UFUNCTION() void EmergeTimeline__FinishedFunc();
    UFUNCTION() void EmergeTimeline__SpawnFollower__EventFunc();
    UFUNCTION() void EmergeTimeline__UpdateFunc();
    UFUNCTION() void ExecuteUbergraph_BP_Faction_Mission_Boss_Den(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetFollowerWolfSpawnCount(int32& PerSpawnEvent, int32& TotalSpawns);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetRetreatEntryLocation(FVector& WorldLocation, FRotator& WorldRotation);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GetRetreatExitLocation(FVector& WorldLocation, FRotator& WorldRotation);  // parameters 0x18
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_PreEmergeEffects(AIcarusNPCGOAPCharacter* EmergingNPC);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void MakeAIAggressive(AAIController* Target);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void NextSpawn();
    UFUNCTION(BlueprintCallable) void OnFollowerDeath(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void PickNewFollowerTarget(const FVector& Origin, AActor*& Target);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void PlayPreEmergeSFX();
    UFUNCTION(BlueprintCallable) void ProjectExitLocationToLandscape();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SpawnFollower(FTransform SpawnTransform);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void SynchroniseFollowersArray();
    UFUNCTION(BlueprintCallable) void UpdateFollowerLifetimes();
};
