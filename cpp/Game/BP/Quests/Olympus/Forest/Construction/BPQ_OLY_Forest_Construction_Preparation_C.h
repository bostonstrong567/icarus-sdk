// /Game/BP/Quests/Olympus/Forest/Construction/BPQ_OLY_Forest_Construction_Preparation.BPQ_OLY_Forest_Construction_Preparation_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x476, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Forest_Construction_Preparation_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool A;  // 0x0470, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool B;  // 0x0471, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool C;  // 0x0472, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool D;  // 0x0473, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool E;  // 0x0474, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool F;  // 0x0475, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Forest_Construction_Preparation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};
