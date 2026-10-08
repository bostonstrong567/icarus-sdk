// /Game/BP/Quests/BPQ_OLY_Forest_Survey_CollectPod.BPQ_OLY_Forest_Survey_CollectPod_C
// Derives from: ABPQ_Retrieve_Item_Base_C > AQuest > AIcarusActor > AActor > UObject
// size 0x508, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Forest_Survey_CollectPod_C : public ABPQ_Retrieve_Item_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxTimerSeconds;  // 0x04E0, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) TArray<FVector> LocationsList;  // 0x04E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDialogueRowHandle> RandomPodSpawnedDialogue;  // 0x04F8, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckPodsAndLaunch();
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Forest_Survey_CollectPod(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void LandNearbyPods();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SpawnPod(bool First, ABP_MapSearchArea_C* Area, int32 ID);  // parameters 0x14
};
