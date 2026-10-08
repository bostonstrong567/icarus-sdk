// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_O2/BPQ_GH_IM_O2_Capture_Sleep.BPQ_GH_IM_O2_Capture_Sleep_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x472, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_O2_Capture_Sleep_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool A;  // 0x0470, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool B;  // 0x0471, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_IM_O2_Capture_Sleep(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};
