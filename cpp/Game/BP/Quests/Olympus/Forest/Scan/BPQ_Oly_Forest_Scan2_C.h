// /Game/BP/Quests/Olympus/Forest/Scan/BPQ_Oly_Forest_Scan2.BPQ_Oly_Forest_Scan2_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4AC, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Oly_Forest_Scan2_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_ManualAISpawnPoint_C* Spawner;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream RandomStream;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScalingRulesEnum Scaling_CreatureLevel;  // 0x0480, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BonusScaledCreatureLevel;  // 0x0490, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle Item;  // 0x0494, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Oly_Forest_Scan2(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void GiveWolfCorpseRandomItems(ABP_ContainerBase_C* Actor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ItemCheck(bool& bHasRadar);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnReady(APrebuiltStructure* Structure);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
