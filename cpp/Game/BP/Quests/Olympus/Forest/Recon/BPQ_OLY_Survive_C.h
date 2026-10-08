// /Game/BP/Quests/Olympus/Forest/Recon/BPQ_OLY_Survive.BPQ_OLY_Survive_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4E8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Survive_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle WaterLow;  // 0x0470, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle OxygenFull;  // 0x0488, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle FoodLow;  // 0x04A0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle OxygenLow;  // 0x04B8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle WaterFull;  // 0x04D0, size 0x18

    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Survive(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Timeout();
};
