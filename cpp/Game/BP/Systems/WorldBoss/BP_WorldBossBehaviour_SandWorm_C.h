// /Game/BP/Systems/WorldBoss/BP_WorldBossBehaviour_SandWorm.BP_WorldBossBehaviour_SandWorm_C
// Derives from: UBP_WorldBossBehaviour_C > UWorldBossBehaviour > UActorComponent > UObject
// size 0xF1, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_WorldBossBehaviour_SandWorm_C : public UBP_WorldBossBehaviour_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinutesBetweenTravelling;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinutesBetweenTravellingRandomDeviation;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinimumSecondsAfterCombatBeforeTravelling;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WantsToTravel;  // 0x00C4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeSinceLastCombat;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_WorldBoss_SandWorm_MovementProxy_C* TravelProxyActor;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TravelDestination;  // 0x00D8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float UnitsPerSecondTravelSpeed;  // 0x00E4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LandscapeProjectionHeight;  // 0x00E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxTravelDistance;  // 0x00EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseMaxTravelDistance;  // 0x00F0, size 0x1

    UFUNCTION(BlueprintCallable) void BeginTravel(bool& Success);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_WorldBossBehaviour_SandWorm(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FinishTravel();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSpawnedSandWorm(ABP_FactionBoss_SandWorm_C*& SandWorm);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void IsDestinationValid(FVector TargetDestination, bool& Valid);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsTravelling(bool& Travelling);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void OnAIBecomeIrrelevant();
    UFUNCTION(BlueprintImplementableEvent) void OnAIBecomeRelevant();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void StartTravelCountdown();
    UFUNCTION(BlueprintCallable) void TickTravel(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateSpawnerTransform(FTransform NewTransform);  // parameters 0x30
};
