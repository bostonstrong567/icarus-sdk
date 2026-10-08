// /Game/BP/Quests/Olympus/Riverlands/Stockpile2/BPQ_OLY_Riverlands_Stockpile_2_KillBoss.BPQ_OLY_Riverlands_Stockpile_2_KillBoss_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x490, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Riverlands_Stockpile_2_KillBoss_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* BossSpawn;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_ManualAISpawnPoint_C* BossSpawner;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* BossScaling;  // 0x0488, size 0x8

    UFUNCTION(BlueprintCallable) void BossKilled();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Riverlands_Stockpile_2_KillBoss(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
