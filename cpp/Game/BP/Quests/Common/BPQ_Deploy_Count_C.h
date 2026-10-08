// /Game/BP/Quests/Common/BPQ_Deploy_Count.BPQ_Deploy_Count_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x48A, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Deploy_Count_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxCount;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Distance;  // 0x0474, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AIcarusActor> Class;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RequiresShelter;  // 0x0480, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RequiresPower;  // 0x0481, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AllowChecksAfterCompletion;  // 0x0482, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VerticalDistance;  // 0x0484, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CarriedItem;  // 0x0488, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DistanceCheck;  // 0x0489, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckDeployables();
    UFUNCTION() void ExecuteUbergraph_BPQ_Deploy_Count(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool ExtraDeployableChecks(AIcarusActor* Deployable);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void ItemMatch(AIcarusActor* Deployable);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ManualRunOperation();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
