// /Game/BP/Quests/NPC/Norex/BPQ_SQ_Norex_Biomass_Boss.BPQ_SQ_Norex_Biomass_Boss_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x480, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_SQ_Norex_Biomass_Boss_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool A;  // 0x0470, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool B;  // 0x0471, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Spawned;  // 0x0472, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DeathOverride;  // 0x0473, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_ManualAISpawnPoint_C* Spawner;  // 0x0478, size 0x8

    UFUNCTION(BlueprintCallable) void AiKilled_Event_0();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_SQ_Norex_Biomass_Boss(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
