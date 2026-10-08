// /Game/BP/Quests/Styx/B/Research/BPQ_STYX_B_Research_DeployCount.BPQ_STYX_B_Research_DeployCount_C
// Derives from: ABPQ_Deploy_Count_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_STYX_B_Research_DeployCount_C : public ABPQ_Deploy_Count_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0498, size 0x8

    UFUNCTION(BlueprintCallable) void Check_Placement(AActor* Deployable);  // parameters 0x8, named "Check Placement"
    UFUNCTION() void ExecuteUbergraph_BPQ_STYX_B_Research_DeployCount(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnDeployNotify(AIcarusPlayerCharacter* Player, AIcarusActor* Deployable);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
