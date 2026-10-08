// /Game/BP/Quests/Common/BPQ_Common_CatchFish.BPQ_Common_CatchFish_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x494, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Common_CatchFish_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle FishRow;  // 0x0470, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxCount_Easy;  // 0x0488, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxCount_Medium;  // 0x048C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxCount_Hard;  // 0x0490, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Common_CatchFish(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FishCaught(AActor* Fisher, FItemData Fish);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
