// /Game/BP/Quests/Olympus/Omni/Recovery/BPQ_OLY_Omni_Recovery_Search.BPQ_OLY_Omni_Recovery_Search_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Omni_Recovery_Search_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool Thruster;  // 0x0470, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool Navigation;  // 0x0471, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Mission_Crashed_Base_C*> Out_Actors;  // 0x0478, size 0x10, named "Out Actors"

    UFUNCTION(BlueprintCallable) void AddObjects(bool Navigation, bool Thruster);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Omni_Recovery_Search(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
