// /Game/BP/Systems/BP_IcarusGameState.BP_IcarusGameState_C
// Derives from: AIcarusGameStateSurvival > AIcarusGameStateBase > AGameState > AGameStateBase > AInfo > AActor > UObject
// size 0x643, a blueprint class, blueprint

UCLASS(NotPlaceable, Config=Game)
class ABP_IcarusGameState_C : public AIcarusGameStateSurvival
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x05D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_VoxelResourceDistribution_C* BP_VoxelResourceDistribution;  // 0x05D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x05E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* Host;  // 0x05E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Text;  // 0x05F0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_DialogueManager_C* DialogueManager;  // 0x0608, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> DamageOffsets;  // 0x0610, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DamageOffsetIndex;  // 0x0620, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LastDamageTime;  // 0x0624, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDamageNumberDetail> PendingDamageNumbers;  // 0x0628, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastDamageNumberTime;  // 0x0638, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DAMAGE_NUMBER_RATE_LIMIT;  // 0x063C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugBallistics;  // 0x0640, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugCrosshair;  // 0x0641, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugCaveVolumes;  // 0x0642, size 0x1

    UFUNCTION(BlueprintCallable) void DequeueDamageNumber();
    UFUNCTION() void ExecuteUbergraph_BP_IcarusGameState(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetDamageOffset(FVector& Offset);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void GetSessionSpawnGroup(int32& PlayerSpawnGroup, bool& Initialised);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void HadRecentDamageNumber(bool& Recent);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void InitDamageOffsets();
    UFUNCTION(BlueprintCallable) void Log(FString Description);  // parameters 0x10
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_DamageLogging(AActor* Actor, FIcarusDamagePacket DamagePacket);  // parameters 0xE0
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_SpawnFloatingDamageNumbers(FVector Location, EIcarusDamageType DamageType, int32 Value, FCriticalHitAreasEnum CriticalHit, AController* Instigator);  // parameters 0x30
    UFUNCTION(BlueprintImplementableEvent) void QuestCleanup();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SpawnFloatingDamageNumbers(AActor* Actor, const FIcarusDamagePacket& DamagePacket);  // parameters 0xE0
};
