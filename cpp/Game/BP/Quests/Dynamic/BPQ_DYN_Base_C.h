// /Game/BP/Quests/Dynamic/BPQ_DYN_Base.BPQ_DYN_Base_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x484, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_DYN_Base_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_DynamicLocation_C* BPQC_DynamicLocation;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool First_Time;  // 0x0478, size 0x1, named "First Time"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Maximum_Distance;  // 0x047C, size 0x4, named "Maximum Distance"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Minimum_Distance;  // 0x0480, size 0x4, named "Minimum Distance"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_DYN_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLocationFound(FVector Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void PostLocationFound(bool FirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSpawnLocation();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
