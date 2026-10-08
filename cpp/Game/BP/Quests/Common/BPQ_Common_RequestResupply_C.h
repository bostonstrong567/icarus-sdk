// /Game/BP/Quests/Common/BPQ_Common_RequestResupply.BPQ_Common_RequestResupply_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Common_RequestResupply_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FItemTemplateRowHandle, int32> Items;  // 0x0470, size 0x50

    UFUNCTION(BlueprintCallable) void AddItem(AActor* Actor, FItemData Item);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable) void AddSupplyItems(AActor* Actor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CleanupShip();
    UFUNCTION() void ExecuteUbergraph_BPQ_Common_RequestResupply(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnResupplyRequested(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
