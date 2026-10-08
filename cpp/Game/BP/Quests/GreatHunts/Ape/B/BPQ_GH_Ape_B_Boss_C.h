// /Game/BP/Quests/GreatHunts/Ape/B/BPQ_GH_Ape_B_Boss.BPQ_GH_Ape_B_Boss_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4A4, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_Ape_B_Boss_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ApeSpawned;  // 0x0470, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCanEnd;  // 0x0471, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Boss;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue;  // 0x0480, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Target;  // 0x0498, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DistanceCheck;  // 0x04A0, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_Ape_B_Boss(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Trigger();
};
