// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_D3/BPQ_GH_IM_D3_Destroy.BPQ_GH_IM_D3_Destroy_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_D3_Destroy_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool A;  // 0x0470, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool B;  // 0x0471, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString EnzymeUnitName;  // 0x0478, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FQuestQueriesRowHandle> BatSpawners;  // 0x0488, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString NestName;  // 0x0498, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle Row;  // 0x04A8, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_IM_D3_Destroy(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnReady(APrebuiltStructure* Structure);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
