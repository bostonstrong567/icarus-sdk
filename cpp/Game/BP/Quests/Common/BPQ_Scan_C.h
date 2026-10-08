// /Game/BP/Quests/Common/BPQ_Scan.BPQ_Scan_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4F6, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Scan_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Count;  // 0x0478, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialoguePoolRowHandle LocationReached;  // 0x047C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialoguePoolRowHandle DeviceStopped;  // 0x0494, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialoguePoolRowHandle AnimalAttack;  // 0x04AC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialoguePoolRowHandle NextLocation;  // 0x04C4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialoguePoolRowHandle ScanComplete;  // 0x04DC, size 0x18
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool bShowMapIcon;  // 0x04F4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bShowingMapIcon;  // 0x04F5, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Scan(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HandleLocationReached();
    UFUNCTION(BlueprintImplementableEvent) void HandleQuestEvent(FQuestEventsEnum Event, AQuest* Quest);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void HandleRadarActivated();
    UFUNCTION(BlueprintCallable) void HandleRadarStopped();
    UFUNCTION(BlueprintCallable) void HandleScanComplete();
    UFUNCTION(BlueprintCallable) void HandleScanEvent(AQuest* Quest);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_bShowMapIcon();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
