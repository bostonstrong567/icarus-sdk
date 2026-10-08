// /Game/BP/Quests/Olympus/Forest/Construction/BPQ_OLY_Forest_Construction_Decorate_Cabin.BPQ_OLY_Forest_Construction_Decorate_Cabin_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x472, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Forest_Construction_Decorate_Cabin_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool A;  // 0x0470, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool B;  // 0x0471, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Forest_Construction_Decorate_Cabin(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};
