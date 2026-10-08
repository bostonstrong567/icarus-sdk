// /Game/BP/Quests/Elysium/SideQuests/Trails/BPQ_ELY_SQ_Trials_Build.BPQ_ELY_SQ_Trials_Build_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_SQ_Trials_Build_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAccountFlagsRowHandle Speeder_AccountFlag;  // 0x0470, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_SQ_Trials_Build(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GrantAccountFlag(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
