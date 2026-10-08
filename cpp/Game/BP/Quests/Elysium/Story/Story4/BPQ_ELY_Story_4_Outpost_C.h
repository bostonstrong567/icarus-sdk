// /Game/BP/Quests/Elysium/Story/Story4/BPQ_ELY_Story_4_Outpost.BPQ_ELY_Story_4_Outpost_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x47C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_Story_4_Outpost_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool A;  // 0x0470, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool B;  // 0x0471, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool C;  // 0x0472, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DronesPerSpawner;  // 0x0474, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ScaledDrones;  // 0x0478, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_Story_4_Outpost(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnReady(APrebuiltStructure* Structure);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
