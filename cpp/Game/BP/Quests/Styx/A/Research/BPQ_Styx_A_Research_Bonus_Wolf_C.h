// /Game/BP/Quests/Styx/A/Research/BPQ_Styx_A_Research_Bonus_Wolf.BPQ_Styx_A_Research_Bonus_Wolf_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x478, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Styx_A_Research_Bonus_Wolf_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USceneComponent* Target;  // 0x0470, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CreatureKilled(AIcarusPlayerCharacter* Player, AIcarusActor* Causer, AActor* Creature, APawn* KillingBlowFromPawn);  // parameters 0x20
    UFUNCTION() void ExecuteUbergraph_BPQ_Styx_A_Research_Bonus_Wolf(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
