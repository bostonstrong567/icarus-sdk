// /Game/BP/Quests/Dynamic/Hunt/BPQ_DYN_Hunt_Creatures.BPQ_DYN_Hunt_Creatures_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_DYN_Hunt_Creatures_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* BPQC_AnimalSwarm;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_LocationQueries_C* BPQC_LocationQueries;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FAISetupRowHandle TrackedCreature;  // 0x0480, size 0x18
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float CreatureMultiplier;  // 0x0498, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HostileCreatureChance;  // 0x049C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream Stream;  // 0x04A0, size 0x8

    UFUNCTION(BlueprintCallable) void CalculateTrackedCreature();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_DYN_Hunt_Creatures(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void OnCreatureKilled(AIcarusPlayerCharacter* Player, AIcarusActor* Causer, AActor* Creature, APawn* KillingBlowFromPawn);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
