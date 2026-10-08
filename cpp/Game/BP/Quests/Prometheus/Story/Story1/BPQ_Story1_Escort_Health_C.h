// /Game/BP/Quests/Prometheus/Story/Story1/BPQ_Story1_Escort_Health.BPQ_Story1_Escort_Health_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x490, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Story1_Escort_Health_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AISetup;  // 0x0470, size 0x18
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ABP_Mount_Blueback_C* Daisy;  // 0x0488, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DaisyDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BPQ_Story1_Escort_Health(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
