// /Game/BP/Quests/Implementations/Bw6_Survey/BP_BW6_Survey_DefendTransmitter.BP_BW6_Survey_DefendTransmitter_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x491, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BW6_Survey_DefendTransmitter_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* BPQC_Minons2;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* BPQC_Boss;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* BPQC_Minons;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_SurveyTransmitter_C* SurveyTransmitter;  // 0x0488, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AbleToTransmit;  // 0x0490, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_BW6_Survey_DefendTransmitter(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
