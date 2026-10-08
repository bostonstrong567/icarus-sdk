// /Game/BP/AI/Bosses/BT/IceMammoth/BTS_SpawnIceBirds.BTS_SpawnIceBirds_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0x17C, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_SpawnIceBirds_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SpawnRate;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BirdsPerPlayer;  // 0x00A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector HasArmor;  // 0x00A8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_NPC_Ice_MammothBoss_Character_C* MammothBoss;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector CurrentPhase;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAISetupRowHandle> ActorsToSpawn;  // 0x0100, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> SpawnedBirds;  // 0x0110, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector SwarmBirds;  // 0x0120, size 0x28
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USceneComponent* SpawnLocation;  // 0x0148, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AdjustedMaxBirds;  // 0x0150, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScalingRulesEnum ScalingRules;  // 0x0158, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TicksTillSpawn;  // 0x0168, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ElapsedTicks;  // 0x016C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AdjustedSpawnRate;  // 0x0170, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ClampedBirds;  // 0x0174, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ChanceToSpawn;  // 0x0178, size 0x4

    UFUNCTION(BlueprintCallable) void Cache_Birds_Types();  // named "Cache Birds Types"
    UFUNCTION() void ExecuteUbergraph_BTS_SpawnIceBirds(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnCreatureDeath(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
};
