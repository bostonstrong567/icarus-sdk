// /Game/BP/Quests/Prometheus/D/Transport/BPQ_PRO_D_Transport_List.BPQ_PRO_D_Transport_List_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_D_Transport_List_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_SearchArea_C* BPQC_SearchArea;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_DeployableContainerBase_C*> DeployableList;  // 0x0478, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue;  // 0x0488, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckItemType(FItemsStaticRowHandle Item, int32& Count);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void CheckNearbyPlayers();
    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_D_Transport_List(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
