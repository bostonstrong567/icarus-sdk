// /Game/BP/Quests/Implementations/Bw3_Mammoth/BP_BW3_CollectTusk.BP_BW3_CollectTusk_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x471, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BW3_CollectTusk_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Collected;  // 0x0470, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_BW3_CollectTusk(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
