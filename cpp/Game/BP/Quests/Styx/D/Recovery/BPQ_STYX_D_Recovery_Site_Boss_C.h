// /Game/BP/Quests/Styx/D/Recovery/BPQ_STYX_D_Recovery_Site_Boss.BPQ_STYX_D_Recovery_Site_Boss_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x478, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_STYX_D_Recovery_Site_Boss_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0470, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CreatureKilledHandler(AIcarusPlayerCharacter* Player, AIcarusActor* Causer, AActor* Creature, APawn* KillingBlowFromPawn);  // parameters 0x20
    UFUNCTION() void ExecuteUbergraph_BPQ_STYX_D_Recovery_Site_Boss(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnCreatureSpawned(AActor* SpawnedActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
