// /Game/BP/Quests/GreatHunts/Ape/C/BPQ_GH_Ape_C_Stage_Equipment.BPQ_GH_Ape_C_Stage_Equipment_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x47A, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_Ape_C_Stage_Equipment_C : public AQuest
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
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool G;  // 0x0476, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool H;  // 0x0477, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool I;  // 0x0478, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool J;  // 0x0479, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_Ape_C_Stage_Equipment(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};
