// /Game/BP/Quests/Olympus/Omni/Recovery/BPQ_OLY_Omni_Recovery_Progress.BPQ_OLY_Omni_Recovery_Progress_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x484, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Omni_Recovery_Progress_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool Is_Active;  // 0x0470, size 0x1, named "Is Active"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UEnergyComponent* EnergyComp;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LastStoredUnits;  // 0x0480, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Omni_Recovery_Progress(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateActiveState(bool NewActive);  // parameters 0x1
};
