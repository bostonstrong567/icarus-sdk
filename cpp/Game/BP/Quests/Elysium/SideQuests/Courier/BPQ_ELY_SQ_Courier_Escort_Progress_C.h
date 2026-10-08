// /Game/BP/Quests/Elysium/SideQuests/Courier/BPQ_ELY_SQ_Courier_Escort_Progress.BPQ_ELY_SQ_Courier_Escort_Progress_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_SQ_Courier_Escort_Progress_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 MetresRemaining;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AIcarusActor* TargetActor;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AIcarusActor* Drone;  // 0x0480, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_SQ_Courier_Escort_Progress(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
