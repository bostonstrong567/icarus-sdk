// /Game/BP/Quests/Implementations/Bw3_Mammoth/BP_BW3_KillMammoth.BP_BW3_KillMammoth_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x480, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BW3_KillMammoth_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_ManualAISpawnPoint_C* BossSpawner;  // 0x0478, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Cleanup();
    UFUNCTION() void ExecuteUbergraph_BP_BW3_KillMammoth(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnCreatureKilledNotify_Event_0(AIcarusPlayerCharacter* Player, AIcarusActor* Causer, AActor* Creature, APawn* KillingBlowFromPawn);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
