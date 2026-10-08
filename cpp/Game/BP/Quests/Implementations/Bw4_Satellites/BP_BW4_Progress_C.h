// /Game/BP/Quests/Implementations/Bw4_Satellites/BP_BW4_Progress.BP_BW4_Progress_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BW4_Progress_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxScanTime;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Delta_Seconds;  // 0x0474, size 0x4, named "Delta Seconds"
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool InRange;  // 0x0478, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FEpicCreaturesRowHandle EpicCreature;  // 0x047C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Enemy_Spawn;  // 0x0494, size 0xC, named "Enemy Spawn"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Target;  // 0x04A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName HostileTargetLocationKey;  // 0x04A8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_BW4_Progress(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TriggerAIEvent();
    UFUNCTION(BlueprintCallable) void TriggerBossDeathDialogue(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TriggerBossSpawnDialogue();
    UFUNCTION(BlueprintCallable) void TriggerEndDialogue();
};
