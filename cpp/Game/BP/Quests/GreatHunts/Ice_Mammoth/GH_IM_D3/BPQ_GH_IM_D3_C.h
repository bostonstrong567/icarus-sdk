// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_D3/BPQ_GH_IM_D3.BPQ_GH_IM_D3_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4A9, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_D3_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_SearchArea_C* BPQC_SearchArea;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool B;  // 0x0478, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool A;  // 0x0479, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_IcarusNPCGOAPCharacter_C*> GoapList;  // 0x0480, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAtmospheresRowHandle Swamp;  // 0x0490, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SerumActive;  // 0x04A8, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_IM_D3(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
