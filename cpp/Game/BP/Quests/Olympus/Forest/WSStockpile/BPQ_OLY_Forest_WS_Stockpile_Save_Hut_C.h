// /Game/BP/Quests/Olympus/Forest/WSStockpile/BPQ_OLY_Forest_WS_Stockpile_Save_Hut.BPQ_OLY_Forest_WS_Stockpile_Save_Hut_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x491, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Forest_WS_Stockpile_Save_Hut_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Fixed;  // 0x0470, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Unique;  // 0x0474, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Repaired;  // 0x0478, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> Current;  // 0x0480, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FireStarted;  // 0x0490, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Forest_WS_Stockpile_Save_Hut(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
