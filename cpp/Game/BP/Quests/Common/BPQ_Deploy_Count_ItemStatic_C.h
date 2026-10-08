// /Game/BP/Quests/Common/BPQ_Deploy_Count_ItemStatic.BPQ_Deploy_Count_ItemStatic_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x493, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Deploy_Count_ItemStatic_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxCount;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Distance;  // 0x0474, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle ItemStaticRow;  // 0x0478, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RequiresShelter;  // 0x0490, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RequiresPower;  // 0x0491, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AllowChecksAfterCompletion;  // 0x0492, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckDeployables();
    UFUNCTION() void ExecuteUbergraph_BPQ_Deploy_Count_ItemStatic(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool ExtraDeployableChecks(AIcarusActor* Deployable);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetItemName(FText& Name);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ManualRunOperation();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
