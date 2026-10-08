// /Game/BP/Quests/Prometheus/Story/Story1/BPQ_Story1_Escort.BPQ_Story1_Escort_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x53C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Story1_Escort_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_SearchArea_C* BPQC_SearchArea;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool bSearchAreaShown;  // 0x0478, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AISetup;  // 0x047C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle DaisyDiedNatural;  // 0x0494, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle DaisyDiedPlayer;  // 0x04AC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle FoundBaseDaisyDied;  // 0x04C4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle LootedBaseDaisyAbandoned;  // 0x04DC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle LootBaseDaisyDied;  // 0x04F4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle FoundBaseDaisyAbandoned;  // 0x050C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle DaisyMadeItHomeSafely;  // 0x0524, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckOnDaisy();
    UFUNCTION() void ExecuteUbergraph_BPQ_Story1_Escort(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnDaisyDeath(bool KilledByPlayer);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnEscortComplete();
    UFUNCTION(BlueprintCallable) void OnRep_ShowSearchArea();
    UFUNCTION(BlueprintCallable) void PlayDialogue(const FDialogueRowHandle& Dialogue);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
