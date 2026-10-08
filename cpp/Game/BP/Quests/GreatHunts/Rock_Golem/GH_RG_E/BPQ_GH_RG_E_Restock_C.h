// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_E/BPQ_GH_RG_E_Restock.BPQ_GH_RG_E_Restock_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x474, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_E_Restock_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool _1;  // 0x0470, size 0x1, named "1"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool _2;  // 0x0471, size 0x1, named "2"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool _3;  // 0x0472, size 0x1, named "3"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool _4;  // 0x0473, size 0x1, named "4"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_RG_E_Restock(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};
