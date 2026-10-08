// /Game/BP/Quests/Common/BPQ_Common_Progress.BPQ_Common_Progress_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x484, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Common_Progress_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool NearbyPlayers;  // 0x0470, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumberOfPlayers;  // 0x0474, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle Event;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxPlayerDistance;  // 0x0480, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckPlayers();
    UFUNCTION() void ExecuteUbergraph_BPQ_Common_Progress(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxTime();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PlayersLeftArea();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
