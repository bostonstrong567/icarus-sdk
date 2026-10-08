// /Game/BP/Quests/Dynamic/BPQ_DYN_Reward.BPQ_DYN_Reward_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x490, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_DYN_Reward_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CreditsToAward;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FExperienceEventsRowHandle ExpToAward;  // 0x0474, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ExperienceAwarded;  // 0x048C, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_DYN_Reward(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
