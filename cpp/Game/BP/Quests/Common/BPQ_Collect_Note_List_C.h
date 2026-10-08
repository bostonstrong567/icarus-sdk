// /Game/BP/Quests/Common/BPQ_Collect_Note_List.BPQ_Collect_Note_List_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x498, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Collect_Note_List_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCollectableNotesRowHandle> Note;  // 0x0470, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ManualCheck;  // 0x0480, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> Collected;  // 0x0488, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckNoteID(AIcarusPlayerCharacter* Player, AIcarusActor* Deployable);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_BPQ_Collect_Note_List(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ItemCheck();
    UFUNCTION(BlueprintCallable) void ManualRunOperations();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
