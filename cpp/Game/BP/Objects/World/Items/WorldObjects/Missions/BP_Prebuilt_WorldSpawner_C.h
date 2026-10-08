// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Prebuilt_WorldSpawner.BP_Prebuilt_WorldSpawner_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x39C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Prebuilt_WorldSpawner_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FCreatureSpawned CreatureSpawned;  // 0x0328, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPrebuiltStructuresRowHandle> PossiblePrebuiltStructures;  // 0x0338, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Prebuilt_Base_C* PrebuiltRef;  // 0x0348, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAISetupRowHandle> PossibleAISetupSpawns;  // 0x0350, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D SpawnedAILevel;  // 0x0360, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D NumAIToSpawn;  // 0x0368, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> SpawnedNPCs;  // 0x0370, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AnchorNPCs;  // 0x0380, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemRewardsRowHandle ContainerLoot;  // 0x0384, size 0x18

    UFUNCTION(BlueprintCallable) void CreatureSpawned__DelegateSignature();
    UFUNCTION(BlueprintCallable) void CustomEvent_0();
    UFUNCTION() void ExecuteUbergraph_BP_Prebuilt_WorldSpawner(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void PopulateContainersWithLoot();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TrySpawnAI();
};
