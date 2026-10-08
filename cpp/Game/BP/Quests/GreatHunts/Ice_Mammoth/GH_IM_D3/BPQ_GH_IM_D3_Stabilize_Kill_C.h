// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_D3/BPQ_GH_IM_D3_Stabilize_Kill.BPQ_GH_IM_D3_Stabilize_Kill_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x498, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_D3_Stabilize_Kill_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_IcarusNPCGOAPCharacter_C*> GoapList;  // 0x0470, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAtmospheresRowHandle Swamp;  // 0x0480, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CreatureKilledPercent(AIcarusPlayerCharacter* Player, AIcarusActor* Causer, AActor* Creature, APawn* KillingBlowFromPawn);  // parameters 0x20
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_IM_D3_Stabilize_Kill(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
