// /Game/BP/Quests/Elysium/SideQuests/Courier/BPQ_ELY_SQ_Courier_Escort.BPQ_ELY_SQ_Courier_Escort_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4AC, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_SQ_Courier_Escort_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool A;  // 0x0470, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool B;  // 0x0471, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Outpost1;  // 0x0472, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Outpost2;  // 0x0473, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusActor* Drone;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OutpostDistanceStart;  // 0x0480, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumSwarmDronesToKill;  // 0x0484, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DronesKilled;  // 0x0488, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBPQC_AdvancedAnimalSwarm_C* AnimalSwarm;  // 0x0490, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream LevelStream;  // 0x0498, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector DroneSpawnLocation;  // 0x04A0, size 0xC

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CustomEvent(APrebuiltStructure* Structure);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_SQ_Courier_Escort(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OutsideSpawned(APrebuiltStructure* Structure);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
