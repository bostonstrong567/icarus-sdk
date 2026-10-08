// /Game/BP/Objects/World/Items/Deployables/Missions/BP_Colony_Arcade_Machine.BP_Colony_Arcade_Machine_C
// Derives from: ABP_Rad_Radio_Tower_C > ABP_Deployable_ManualToggle_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Colony_Arcade_Machine_C : public ABP_Rad_Radio_Tower_C, public IArcadeMachineRecorderInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* Widget_ScoresDisplay;  // 0x07A8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TArray<FArcadeMachineScore> Scores;  // 0x07B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EArcadeMachineRankingType RankingType;  // 0x07C0, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AActor* CurrentArcadePlayer;  // 0x07C8, size 0x8

    UFUNCTION(BlueprintCallable) void ActiveUpdated(bool bNewActive);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_StopInteract(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Colony_Arcade_Machine(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) TArray<FArcadeMachineScore> GetArcadeMachineScores() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, NetMulticast) void MulticastPlayHighScoreSFX(bool bNewHighScore);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnRep_Scores();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void SetArcadeMachineScores(const TArray<FArcadeMachineScore>& Scores);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SubmitPlayerScore(const FArcadeMachineScore& ArcadeMachineScore);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void UpdateScores(const TArray<FArcadeMachineScore>& Scores);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdateScoresDisplay();
};
