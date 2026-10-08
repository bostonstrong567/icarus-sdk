// /Game/BP/Quests/Dynamic/Lost/BPQ_DYN_Lost.BPQ_DYN_Lost_C
// Derives from: ABPQ_DYN_Base_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4F0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_DYN_Lost_C : public ABPQ_DYN_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_DynamicLocation_C* BPQC_BaseLocation;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGenericAITargetComponent* GenericAITarget;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_LocationQueries_C* BPQC_LocationQueries;  // 0x04A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FEpicCreaturesRowHandle EpicCreature;  // 0x04A8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle Creature;  // 0x04C0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle Row;  // 0x04D8, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_DYN_Lost(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetItems(const TArray<FItemData>& Array);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnBaseLocationFound(FVector Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void PostLocationFound(bool FirstTime);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetupSpawner();
    UFUNCTION(BlueprintCallable) void SpawningComplete();
};
